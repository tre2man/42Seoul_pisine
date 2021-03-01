/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 22:05:23 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/01 22:28:56 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_ex05(char *base)
{
	int	i;
	int	j;
	char	temp;

	i = 1;
	while (base[i])
	{
		i = j;
		while (base[j])
		{
			if (base[j - 1] > base[j])
			{
				temp = base[j];
				base[j] = base[j - 1];
				base[j - 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	ans;
	int	minus;
	char	*base_copy;

	ans = 0;
	minus = 0;
	ft_sort_ex05(base);
	base_copy = base;
	while(*base)
	{
		if (!base || !*(base + 1) || *base == '+' || *base == '-' || *base == *(base + 1))
			return (0);
		base++;
	}
	while (*str < '0' || *str > '9')
	{
		if (*str == '-')
			minus++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{

	}
}


