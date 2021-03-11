/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 22:05:23 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/11 15:01:30 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_num(char input, char *base)
{
	int	index;

	index = -1;
	while (base[++index])
	{
		if (base[index] == input)
			return (index);
	}
	return (0);
}

int		ft_is_available(char input, char *base)
{
	int	index;

	index = -1;
	while (base[++index])
	{
		if (base[index] == input)
			return (1);
	}
	return (0);
}

int		ft_base_len(char *base)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
	{
		base_len++;
	}
	return (base_len);
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

int		ft_atoi_base(char *str, char *base)
{
	int	ans;
	int	index;
	int	minus;
	int	base_len;

	ans = 0;
	index = 0;
	minus = 1;
	if (!ft_base_correct(base))
		return (0);
	base_len = ft_base_len(base);
	while (str[index] < '0' || str[index] > '9')
	{
		if (str[index] == '-')
			minus *= -1;
		index++;
	}
	while (ft_is_available(str[index], base))
	{
		ans = (ans * base_len) + ft_num(str[index], base) * minus;
		index++;
	}
	return (ans);
}
