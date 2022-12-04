/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 03:51:57 by byu               #+#    #+#             */
/*   Updated: 2021/03/18 10:51:50 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		ft_start(char *ptr)
{
	int		fd;
	int		**second_int_map;
	char	**second_char_map;

	fd = open_file(ptr);
	second_char_map = make_second_char_map(read_file(fd));
	if (!is_valid_line_num(second_char_map) || !is_valid_char() ||
			!is_valid_num() || !is_row_len_same(second_char_map))
	{
		print_error();
		return ;
	}
	second_int_map = make_second_int_map();
	second_int_map = init_second_int_map(second_char_map, second_int_map);
	if (second_int_map == 0)
	{
		free(second_int_map);
		print_error();
		return ;
	}
	ft_free_str(second_char_map, g_int[2] + 2);
	bsq(second_int_map);
	ft_free_ints(second_int_map, g_int[2] + 2);
	free(second_char_map);
	free(second_int_map);
}

void		ft_start2(void)
{
	int		fd;
	int		**second_int_map;
	char	**second_char_map;

	fd = 0;
	second_char_map = make_second_char_map(read_one_line(fd));
	if (!is_valid_line_num(second_char_map) || !is_valid_char() ||
			!is_valid_num() || !is_row_len_same(second_char_map))
	{
		print_error();
		return ;
	}
	second_int_map = make_second_int_map();
	second_int_map = init_second_int_map(second_char_map, second_int_map);
	if (second_int_map == 0)
	{
		free(second_int_map);
		print_error();
		return ;
	}
	ft_free_str(second_char_map, g_int[2] + 2);
	free(second_char_map);
	ft_free_ints(second_int_map, g_int[2] + 2);
	bsq(second_int_map);
	free(second_int_map);
}
