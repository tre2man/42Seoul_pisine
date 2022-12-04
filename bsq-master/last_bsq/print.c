/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:55:06 by byu               #+#    #+#             */
/*   Updated: 2021/03/18 10:38:30 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	while (*c)
		ft_putchar(*(c++));
}

void	ft_print_map(int **map, int a, int b, char *print_str)
{
	int		x;
	int		y;

	x = -1;
	while (++x < a)
	{
		y = -1;
		while (++y < b)
		{
			if (map[x][y] == -1)
				ft_putchar(print_str[2]);
			else if (map[x][y] == 0)
				ft_putchar(print_str[1]);
			else
				ft_putchar(print_str[0]);
		}
		ft_putchar('\n');
	}
}
