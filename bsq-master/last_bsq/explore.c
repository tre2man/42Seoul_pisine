/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   explore.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:56:45 by byu               #+#    #+#             */
/*   Updated: 2021/03/18 10:36:42 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		ft_fill_square(int **map, t_space start)
{
	int		x;
	int		y;

	x = start.x + 1;
	while (--x > start.x - start.value)
	{
		y = start.y + 1;
		while (--y > start.y - start.value)
		{
			map[x][y] = -1;
		}
	}
}

void		ft_fill_num_one(int **map, int a, int b, t_space *ans)
{
	int		x;
	int		y;

	ans->x = 0;
	ans->y = 0;
	ans->value = 0;
	x = -1;
	while (++x < a)
	{
		y = -1;
		while (++y < b)
		{
			if (map[x][y] > ans->value)
			{
				ans->x = x;
				ans->y = y;
				ans->value = map[x][y];
			}
		}
	}
}

void		ft_fill_num_non_one(int **map, int a, int b, t_space *ans)
{
	int		x;
	int		y;

	ans->x = 0;
	ans->y = 0;
	ans->value = 0;
	x = 0;
	while (++x < a)
	{
		y = 0;
		while (++y < b)
		{
			if (map[x][y])
				map[x][y] = 1
					+ ft_min_3(map[x - 1][y], map[x][y - 1], map[x - 1][y - 1]);
			if (map[x][y] > ans->value)
			{
				ans->x = x;
				ans->y = y;
				ans->value = map[x][y];
			}
		}
	}
}

t_space		ft_fill_num(int **map, int a, int b, char *print_str)
{
	t_space ans;

	if (a == 1 || b == 1)
		ft_fill_num_one(map, a, b, &ans);
	else
		ft_fill_num_non_one(map, a, b, &ans);
	ft_fill_square(map, ans);
	ft_print_map(map, a, b, print_str);
	return (ans);
}
