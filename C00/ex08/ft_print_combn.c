/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 17:20:52 by namwkim           #+#    #+#             */
/*   Updated: 2021/02/24 12:39:01 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_arr[10];

void	ft_print(void)
{
	int		index;
	char	out;

	index = -1;
	while (++index < 10)
	{
		out = index + '0';
		if (g_arr[index])
			write(1, &out, 1);
	}
}

void	ft_rec(int start, int max, int test)
{
	int index[3];

	index[1] = 9;
	index[2] = 0;
	if (!max)
	{
		ft_print();
		while (index[1] >= 10 - test)
		{
			if (g_arr[index[1]])
				index[2]++;
			index[1]--;
		}
		if (index[2] != test)
			write(1, &", ", 2);
		return ;
	}
	index[0] = start;
	while (index[0] < 10)
	{
		if (!g_arr[index[0]])
			g_arr[index[0]] = 1;
		ft_rec(index[0] + 1, max - 1, test);
		g_arr[index[0]++] = 0;
	}
}

void	ft_print_combn(int n)
{
	int		index;

	index = 0;
	while (index < 10)
	{
		g_arr[index] = 0;
		index++;
	}
	ft_rec(0, n, n);
}
