/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 17:26:32 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/07 17:41:11 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_arr[16];

void	ft_init(void)
{
	int	index;
	char	input;

	index = -1;
	input = '0';
	while (++index < 10)
	{
		g_arr[index] = input;
		input++;
	}
	input = 'a';
	while (index < 16)
	{
		g_arr[index++] = input;
		input++;
	}
}

void	ft_hex(unsigned char input)
{
	write(1, "\\", 1);
	write(1, &g_arr[input / 16], 1);
	write(1, &g_arr[input % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;
	unsigned int	word;

	ft_init();
	index = -1;
	while (str[++index])
	{
		word = (unsigned int)str[index];
		if (word < ' ' || word > '~')
			ft_print(str[index]);
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
			ft_hex(str[index]);
		else
			write(1, &str[index], 1);
	}
}
