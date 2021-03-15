/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 22:05:23 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/11 23:54:16 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_available(char c,char *base)
{
	while(*base)
	{
		if (c == *base)
			return (1);
		base++;
	}
	return (0);
}

void	ft_make_ans(char c, int *ans, char *base, int minus)
{
	int		index;
	int		len;
	
	index = -1;
	len = 0;
	while (base[len])
		len++;
	while (base[++index])
	{
		if (base[index] == c)
		{
			*ans = ((*ans) * len) + minus * index;
			return ;
		}
	}
}

int		ft_base_correct(char *str, char *base)
{
	int	i;
	int	j;

	i = -1;
	if (!base[0] || !base[1])
		return (0);
	while (base[++i])
	{
		j = -1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[++j])
		{
			if (i != j && base[i] == base[j])
				return (0);
		}
	}
	return (1);
}

int			ft_atoi(char *str, char *base)
{
	int 	minus;
	int		ans;

	minus = 1;
	ans = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (ft_available(*str, base))
	{
		ft_make_ans(*str, &ans, base, minus);
		str++;
	}
	return (ans);
}

int		ft_atoi_base(char *str, char *base)
{
	int		ans;

	if (!ft_base_correct(str, base))
		return (0);
	ans = ft_atoi(str, base);
	return (ans);
}
