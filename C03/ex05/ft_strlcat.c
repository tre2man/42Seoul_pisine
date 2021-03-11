/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 00:29:40 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/11 15:12:26 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	unsigned int	index;

	index = 0;
	while (src[index])
		index++;
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_index;
	unsigned int	src_index;

	dest_index = ft_strlen(dest);
	src_index = 0;
	if (size < dest_index)
		return (ft_strlen(src) + size);
	while (src[src_index] && dest_index + 1 < size)
	{
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}
	dest[dest_index] = '\0';
	while (src[src_index])
	{
		src_index++;
		dest_index++;
	}
	return (dest_index);
}

#include <stdio.h>
#include <string.h>

int main()
{
	printf("%u\n", ft_strlcat("asdf","kkk",5));
	printf("%lu\n", strlcat("asdf","kkk",5));
}
