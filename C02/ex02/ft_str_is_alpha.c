/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 22:08:28 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/05 12:28:12 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = -1;
	while (str[++index])
	{
		if (str[index] < 'A' || (str[index] > 'Z' && str[index] < 'a') || str[index] > 'z')
			return (0);
	}
	return (1);
}
