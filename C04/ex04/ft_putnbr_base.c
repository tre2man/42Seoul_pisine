/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 19:58:15 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/08 13:01:40 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_correc_base(char *base)
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
	if (!ft_correc_base(base))
		return;
	if (nbr < 0)
		write(1, "-", 1);
	while (base[base_length])
		base_length++;
	ft_rec(nbr, base_length, base);
}
