/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 23:53:40 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/02 01:24:36 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_arr[10];

void	ft_print(void)
{
	int	i;
	char	a;
	
	i = -1;
	while (++i < 10)
	{
		a = g_arr[i] + '0';
		write(1, &a, 1);
	}
	write(1, "\n", 1);
}

int	ft_correct(int index)
{
	int	i;
	int	check;

	i = -1;
	while (++i < index)
	{
		check = g_arr[i] - g_arr[index];
		if (check < 0)
			check *= -1;
		if (g_arr[index] == g_arr[i] || check == index - i)
			return (0);
	}
	return (1);
}

void	ft_rec(int start)
{
	int	i;

	i = -1;
	if (number == 10)
	{
		ft_print();
		return;
	}
	while (++i < 10)
	{
		g_arr[start] = i;
		if(ft_correct(start))
			ft_rec(start + 1);
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	i;

	i = -1;
	while (++i < 10)
		g_arr[i] = 0;
	ft_rec(0);
}
