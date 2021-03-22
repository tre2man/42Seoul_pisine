/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 23:53:18 by namwkim           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/03/18 00:57:00 by namwkim          ###   ########.fr       */
=======
/*   Updated: 2021/03/18 22:04:45 by namwkim          ###   ########.fr       */
>>>>>>> 95c9b3f244c7067a8b957afad7528729ce732872
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
	*range = (int*)malloc(sizeof(int) * length);
	if (!range)
		return (-1);
	while (min < max)
	{
		(*range)[index] = min++;
		index++;
	}
	return (length);
}
