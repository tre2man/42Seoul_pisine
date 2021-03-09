/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 22:45:13 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/08 17:32:48 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			is_word(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char		*ft_strcapitalize(char *str)
{
	int		index;

	index = -1;
	while (str[++index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] += 32;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	index = 0;
	while (str[++index])
	{
		if (!is_word(str[index - 1]) && (is_word(str[index])))
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] -= 32;
	}
	return (str);
}
