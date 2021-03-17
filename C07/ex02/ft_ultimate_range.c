/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 23:53:18 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/17 10:58:06 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_ultimate_range(int **range, int min, int max)
{
	int		length;
	int		index;

	if (min >= max)
		return (0);
	index = 0;
	length = max - min;
	if (length < 0)
		return (-1);
	*range = (int*)malloc(sizeof(int) * length);
	while (min < max)
	{
		(*range)[index] = min++;
		index++;
	}
	return (length);
}
