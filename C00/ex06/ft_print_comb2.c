/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 15:08:30 by namwkim           #+#    #+#             */
/*   Updated: 2021/02/23 18:29:35 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_str(int a, int b)
{
	char	arr[8];

	arr[0] = (a / 10) + '0';
	arr[1] = (a % 10) + '0';
	arr[2] = ' ';
	arr[3] = (b / 10) + '0';
	arr[4] = (b % 10) + '0';
	arr[5] = ',';
	arr[6] = ' ';
	arr[7] = '\0';
	write(1, &arr, 7);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 97)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_str(a, b);
			b++;
		}
		a++;
	}
	write(1, &"98 99", 5);
}
