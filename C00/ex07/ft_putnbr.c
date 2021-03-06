/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 15:27:04 by namwkim           #+#    #+#             */
/*   Updated: 2021/02/23 18:28:05 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rec(int nb)
{
	int		input;
	char	out;

	input = nb % 10;
	if (input < 0)
		input *= -1;
	out = input + '0';
	if (nb > 9 || nb < -9)
		ft_rec(nb / 10);
	write(1, &out, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		write(1, "-", 1);
	ft_rec(nb);
}
