/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valied.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 10:48:48 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/06 23:09:25 by seopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_arr[4][4];
int		g_num_arr[16];
int		g_count_1;
int		g_count_2;

void	check_cor_row_index(int i, int j, int amax, int bmax)
{
	if (g_arr[i][j] < g_arr[i][j + 1] && g_arr[i][j + 1] > amax)
	{
		g_count_1++;
		amax = g_arr[i][j + 1];
	}
	if (g_arr[i][3 - j] < g_arr[i][2 - j] && g_arr[i][2 - j] > bmax)
	{
		g_count_2++;
		bmax = g_arr[i][2 - j];
	}
}

void	check_cor_col_index(int i, int j, int amax, int bmax)
{
	if (g_arr[j][i] < g_arr[j + 1][i] && g_arr[j + 1][i] > amax)
	{
		g_count_1++;
		amax = g_arr[j + 1][i];
	}
	if (g_arr[3 - j][i] < g_arr[2 - j][i] && g_arr[2 - j][i] > bmax)
	{
		g_count_2++;
		bmax = g_arr[2 - j][i];
	}
}

int		check_cor_row(void)
{
	int		i;
	int		j;
	int		amax;
	int		bmax;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		g_count_1 = 1;
		g_count_2 = 1;
		amax = g_arr[i][j + 1];
		bmax = g_arr[i][2 - j];
		while (++j < 3)
			check_cor_row_index(i, j, amax, bmax);
		if (g_count_1 != g_num_arr[i + 8] || g_count_2 != g_num_arr[i + 12])
			return (0);
	}
	return (1);
}

int		check_cor_col(void)
{
	int		i;
	int		j;
	int		amax;
	int		bmax;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		g_count_1 = 1;
		g_count_2 = 1;
		amax = g_arr[j + 1][i];
		bmax = g_arr[2 - j][i];
		while (++j < 3)
			check_cor_col_index(i, j, amax, bmax);
		if (g_count_1 != g_num_arr[i] || g_count_2 != g_num_arr[i + 4])
			return (0);
	}
	return (1);
}
