/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 22:28:07 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/02 23:42:32 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ans;
	int	src_len;
	int	temp;

	src_len = 0;
	while (src[src_len])
		src_len++;
	ans = (char *)malloc(sizeof(char) * len);
	temp = 0;
	while (src[temp])
	{
		ans[temp] = src[temp];
		temp++;
	}
	ans[temp] = '\0';
	return (ans);
}

