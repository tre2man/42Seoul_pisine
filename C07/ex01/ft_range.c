/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 23:42:47 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/02 23:50:02 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ans;
	int	index;
	unsigned int	range;

	index = 0;
	if (min >= max)
		return (NULL);
	range = (unsigned int)(max - min);
	ans = (int *)malloc(sizeof(int) * range);
	while (min < max)
		ans[index++] = min++;
	return ans;
}
