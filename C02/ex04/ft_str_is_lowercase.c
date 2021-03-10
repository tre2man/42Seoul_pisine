/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 22:18:55 by namwkim           #+#    #+#             */
/*   Updated: 2021/02/28 22:25:52 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = -1;
	while (str[++index])
	{
		if (str[index] < 'a' || str[index] > 'z')
			return (0);
	}
	return (1);
}
