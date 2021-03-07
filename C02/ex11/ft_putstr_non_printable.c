/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:06:49 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/05 12:20:03 by namwkim          ###   ########.fr       */
=======
/*   By: namwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:09:49 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/06 15:07:07 by namwkim          ###   ########.fr       */
>>>>>>> 82f6b408253561c3899bbffe8663cae346006b65
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_arr[16];

<<<<<<< HEAD
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

void	ft_print(char c)
{
	write(1, "\\", 1);
	write(1, &g_arr[c / 16], 1);
	write(1, &g_arr[c % 16], 1);
=======
void	ft_hex(unsigned char input)
{
	write(1, "\\", 1);
	write(1, &g_arr[input / 16], 1);
	write(1, &g_arr[input % 16], 1);
>>>>>>> 82f6b408253561c3899bbffe8663cae346006b65
}

void	ft_putstr_non_printable(char *str)
{
<<<<<<< HEAD
	int	index;
	unsigned int	word;

	ft_init();
	index = -1;
	while (str[++index])
	{
		word = (unsigned int)str[index];
		if (word < ' ' || word > '~')
			ft_print(str[index]);
=======
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
>>>>>>> 82f6b408253561c3899bbffe8663cae346006b65
		else
			write(1, &str[index], 1);
	}
}
