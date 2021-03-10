/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 22:42:20 by namwkim           #+#    #+#             */
/*   Updated: 2021/02/28 22:44:47 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	index;

	index = -1;
	while (str[++index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] += 32;
	}
	return (str);
}
