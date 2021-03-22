/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 22:28:07 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/22 23:15:40 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char	*ans;
	int		src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	ans = (char *)malloc(sizeof(char) * (src_len + 1));
	src_len = 0;
	while (src[src_len])
	{
		ans[src_len] = src[src_len];
		src_len++;
	}
	ans[src_len] = '\0';
	return (ans);
}
