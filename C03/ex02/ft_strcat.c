/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 00:29:40 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/09 09:50:05 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcat(char *dest, char *src)
{
	int		dest_index;
	int		src_index;

	dest_index = 0;
	src_index = 0;
	while (dest[dest_index])
		dest_index++;
	while (src[src_index])
	{
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}
	dest[dest_index] = '\0';
	return (dest);
}
