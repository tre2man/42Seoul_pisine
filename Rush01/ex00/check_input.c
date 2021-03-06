/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:01:26 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/06 23:36:48 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern int	g_arr[4][4];
extern int	g_num_arr[16];

int		check_input(char *arr)
{
	int		index;
	int		num;
	char	*temp;

	temp = arr;
	index = 0;
	num = 0;
	while (*temp)
	{
		if (*temp >= '1' && *temp <= '4')
		{
			g_num_arr[index] = *temp - '0';
			index++;
		}
		temp++;
		num++;
	}
	if (num != 31)
		return (0);
	else if (index == 16)
		return (1);
	else
		return (0);
}

void	init(void)
{
	int		i;
	int		j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			g_arr[i][j] = 0;
		}
	}
}
