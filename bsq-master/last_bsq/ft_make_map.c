/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:18:56 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/18 10:37:15 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			g_int[3];
char		g_char[3];
int			g_buff_size;

char		*up_size_buff(char *buff)
{
	char	*up_size_buff;

	up_size_buff = (char *)malloc(sizeof(char) * (g_buff_size * 2));
	if (!up_size_buff)
		return (0);
	ft_strncpy(up_size_buff, buff, g_buff_size);
	g_buff_size = g_buff_size * 2;
	free(buff);
	return ((up_size_buff + (g_buff_size / 2)));
}

char		*read_file(int fd)
{
	char	*buff;
	int		read_num;

	g_buff_size = 100000000;
	buff = (char *)malloc(sizeof(char) * g_buff_size);
	if (!buff)
		return (0);
	while ((read_num = read(fd, buff, g_buff_size)) > 0)
	{
		if (read_num == g_buff_size)
			buff = up_size_buff(buff);
		else if (read_num < g_buff_size)
			break ;
	}
	if (fd)
		close(fd);
	*(buff + read_num) = 0;
	if (g_buff_size > 100000000)
		return (buff - (g_buff_size / 2));
	else
		return (buff);
}

char		**make_second_char_map(char *buff)
{
	char	**second_char_map;

	second_char_map = ft_split(buff, "\n");
	free(buff);
	g_int[0] = ft_strlen(second_char_map[0]);
	g_int[1] = ft_strlen(second_char_map[1]);
	g_int[2] = ft_atoi(second_char_map[0], g_int[0] - 3);
	g_char[0] = second_char_map[0][g_int[0] - 3];
	g_char[1] = second_char_map[0][g_int[0] - 2];
	g_char[2] = second_char_map[0][g_int[0] - 1];
	return (second_char_map);
}

int			**make_second_int_map(void)
{
	int		**second_int_map;
	int		index;

	index = 0;
	second_int_map = (int **)malloc(sizeof(int *) * (g_int[2]));
	if (!second_int_map)
	{
		free(second_int_map);
		return (0);
	}
	while (index < g_int[2])
	{
		second_int_map[index] = (int *)malloc(sizeof(int) * g_int[1]);
		if (!second_int_map[index])
		{
			free(second_int_map[index]);
			return (0);
		}
		index++;
	}
	return (second_int_map);
}

int			**init_second_int_map(char **second_char_map, int **second_int_map)
{
	int		index;
	int		jdex;

	index = 0;
	while (index < g_int[2])
	{
		jdex = 0;
		while (jdex < g_int[1])
		{
			if (second_char_map[index + 1][jdex] == g_char[0])
				second_int_map[index][jdex] = 1;
			else if (second_char_map[index + 1][jdex] == g_char[1])
				second_int_map[index][jdex] = 0;
			else
				return (0);
			jdex++;
		}
		index++;
	}
	return (second_int_map);
}
