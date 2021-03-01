/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 19:58:15 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/01 22:05:06 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort(char *base)
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

int	ft_correc_base(char *base)
{
	int	i;
	
	i = 1;
	if (base[0] == '+' || base[0] == '-' || !base || base[1])
		return (0);
	while (base[i])
	{
		if (base[i - 1] == base[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_rec(int nb, int number, char *base)
{
	char	a;

	a = nb % number;
	if (nb > number - 1 || nb < -1 * number + 1)
		ft_rec(nb / number, number, base);
	if (a < 0)
		a *= -1;
	write(1, &base[a], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_length;

	base_length = 0;
	ft_sort(base);
	if (!ft_correc_base(base))
		return;
	if (nbr < 0)
		write(1, "-", 1);
	while (base[base_length])
		base_length++;
	ft_rec(nbr, base_length, base);
}
