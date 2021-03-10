/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:12:05 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/06 23:39:59 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

extern int		g_arr[4][4];

int g_complete;

void	print(void)
{
	int		i;
	int		j;
	char	temp;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			temp = g_arr[i][j] + '0';
			write(1, &temp, 1);
			if (j != 3)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

int		check(int x, int y, int input)
{
	int i;
	int j;

	i = x;
	j = -1;
	while (++j < 4)
	{
		if (j != y)
			if (g_arr[i][j] == input)
				return (0);
	}
	i = -1;
	j = y;
	while (++i < 4)
	{
		if (x != i)
			if (g_arr[i][j] == input)
				return (0);
	}
	return (1);
}

void	dfs_check(void)
{
	if (check_cor_row() && check_cor_col())
	{
		print();
		g_complete = 1;
	}
}

void	dfs(int index)
{
	int		num;

	num = 0;
	if (index == 16)
		dfs_check();
	else
	{
		while (++num < 5)
		{
			if (g_complete)
				continue;
			else
			{
				g_arr[index / 4][index % 4] = num;
				if (check(index / 4, index % 4, num))
					dfs(index + 1);
			}
		}
		g_arr[index / 4][index % 4] = 0;
	}
	if (!g_complete && !index)
		write(1, "Error\n", 6);
}
