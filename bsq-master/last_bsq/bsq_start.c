/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_start.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:51:32 by byu               #+#    #+#             */
/*   Updated: 2021/03/18 10:35:55 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	bsq(int **second_int_map)
{
	char	*print_str;

	print_str = (char *)malloc(sizeof(char) * 4);
	print_str[0] = g_char[0];
	print_str[1] = g_char[1];
	print_str[2] = g_char[2];
	print_str[3] = '\0';
	ft_fill_num(second_int_map, g_int[2], g_int[1], print_str);
	free(print_str);
}
