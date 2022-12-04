/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 01:36:59 by byu               #+#    #+#             */
/*   Updated: 2021/03/18 10:38:14 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		is_valid_char(void)
{
	if (g_char[0] == g_char[1] || g_char[1] == g_char[2] ||
			g_char[0] == g_char[2])
		return (0);
	return (1);
}

void	print_error(void)
{
	write(1, "map error\n", 10);
}

int		is_valid_num(void)
{
	if (g_int[0] < 4 || g_int[2] == 0)
		return (0);
	return (1);
}

int		is_row_len_same(char **second_char_map)
{
	int		index;
	int		a;
	int		b;

	index = 2;
	a = ft_strlen(second_char_map[1]);
	while (index < g_int[2] + 1)
	{
		b = ft_strlen(second_char_map[index]);
		if (a != b)
			return (0);
		index++;
	}
	return (1);
}

int		is_valid_line_num(char **second_char_map)
{
	int		index;

	index = 0;
	while (second_char_map[index])
	{
		index++;
	}
	if (index == g_int[2] + 1)
		return (1);
	return (0);
}
