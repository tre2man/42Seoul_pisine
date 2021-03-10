/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 22:12:20 by namwkim           #+#    #+#             */
/*   Updated: 2021/02/28 22:28:39 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	index;

	index = -1;
	while (str[++index])
	{
		if (str[index] < ' ' || str[index] > '~')
			return (0);
	}
	return (1);
}
