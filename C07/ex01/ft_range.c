/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 23:42:47 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/18 00:43:35 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int					*ft_range(int min, int max)
{
	int				*ans;
	int				index;
	long long	range;

	index = 0;
	if (min >= max)
		return (NULL);
	range = (long long)(max - min);
	ans = (int *)malloc(sizeof(int) * range);
	while (min < max)
		ans[index++] = min++;
	return (ans);
}
