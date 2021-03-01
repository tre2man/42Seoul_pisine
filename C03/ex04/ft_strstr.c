/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 11:48:06 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/01 17:07:44 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	find_index;

	index = 0;
	if (!to_find)
		return (str);
	while (str[index])
	{
		find_index = 0;
		while (str[index + find_index] == to_find[find_index] && to_find[find_index])
			find_index++;
		if (!to_find[find_index])
			return (str + index);
		index++;
	}
	return ('\0');
}
