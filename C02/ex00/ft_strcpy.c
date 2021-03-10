/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 18:39:05 by namwkim           #+#    #+#             */
/*   Updated: 2021/02/28 18:41:29 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest,char *src)
{
	int	index;

	index = -1;
	while (src[++index])
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return dest;
}
