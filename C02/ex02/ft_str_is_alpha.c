/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:07:26 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/08 17:28:02 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		index;

	index = -1;
	while (str[++index])
	{
		if (str[index] < 'A' || (str[index] > 'Z' && str[index] < 'a'))
			return (0);
		else if (str[index] > 'z')
			return (0);
	}
	return (1);
}
