/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:09:49 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/08 17:57:03 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_arr[16];

void	ft_hex(unsigned char input)
{
	write(1, "\\", 1);
	write(1, &g_arr[input / 16], 1);
	write(1, &g_arr[input % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		index;
	char	alpha;

	index = -1;
	alpha = '0';
	while (++index < 10)
		g_arr[index] = alpha++;
	alpha = 'a';
	while (index < 16)
		g_arr[index++] = alpha++;
	index = -1;
	while (str[++index])
	{
		if (str[index] < ' ' || str[index] > '~')
			ft_hex((unsigned char)str[index]);
		else
			write(1, &str[index], 1);
	}
}
