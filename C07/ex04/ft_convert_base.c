/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 10:53:39 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/11 10:59:20 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *c);
char	*ft_conv(int input, char *base);

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
	len = ft_strlen(base);
	while (base[++index])
	{
		if (base[index] == c)
		{
			*ans = ((*ans) * len) + minus * index;
			return ;
		}
	}
}

int		ft_base_correct(char *base)
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

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	
	char	*ans_str;
	int		ans_int;

	if (!ft_base_correct(base_from) || !ft_base_correct(base_to))
		return (NULL);
	ans_int = ft_atoi(nbr, base_from);
	ans_str = ft_conv(ans_int, base_to);
	return (ans_str);
}
