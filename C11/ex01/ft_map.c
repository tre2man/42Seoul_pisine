/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 17:59:27 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/17 18:02:57 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*ans;

	i = -1;
	ans = (int*)malloc(sizeof(int) * length);
	while (++i < length)
		ans[i] = f(tab[i]);
	return (ans);
}
