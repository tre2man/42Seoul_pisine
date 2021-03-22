/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 22:28:07 by namwkim           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/03/18 00:42:04 by namwkim          ###   ########.fr       */
=======
/*   Updated: 2021/03/18 17:30:25 by namwkim          ###   ########.fr       */
>>>>>>> 95c9b3f244c7067a8b957afad7528729ce732872
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
