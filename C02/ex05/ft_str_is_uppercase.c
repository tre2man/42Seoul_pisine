/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 22:26:07 by namwkim           #+#    #+#             */
/*   Updated: 2021/02/28 22:27:10 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = -1;
	while (str[++index])
	{
		if (str[index] < 'A' || str[index] > 'Z')
			return (0);
	}
	return (1);
}
