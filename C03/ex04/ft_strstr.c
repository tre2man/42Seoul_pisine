/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 11:48:06 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/11 23:01:31 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	find;

	index = 0;
	if (!*to_find)
		return (str);
	while (str[index])
	{
		find = 0;
		while (to_find[find] && str[index + find] == to_find[find])
			find++;
		if (!to_find[find])
			return (str + index);
		index++;
	}
	return (0);
}
