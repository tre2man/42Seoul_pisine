/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:33:01 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/08 19:39:10 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rec(int nb)
{
	char	a;

	a = nb % 10;
	if (a < 0)
		a *= -1;
	a += '0';
	if (nb > 9 || nb < -9)
		ft_rec(nb / 10);
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		write(1, "-", 1);
	ft_rec(nb);
}
