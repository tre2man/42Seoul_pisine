/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:16:57 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/18 10:55:56 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		ft_free_str(char **str, int row_len)
{
	int		i;

	i = 0;
	while (i < row_len)
	{
		free(str[i]);
		i++;
	}
}

void		ft_free_ints(int **input, int row_len)
{
	int		i;

	i = 0;
	while (i < row_len)
	{
		free(input[i]);
		i++;
	}
}
