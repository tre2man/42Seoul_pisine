/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:45:11 by byu               #+#    #+#             */
/*   Updated: 2021/03/18 10:37:42 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			ft_word_count(char *str, char *sep)
{
	int		word_flag;
	int		word_cnt;

	word_flag = 0;
	word_cnt = 0;
	while (*str)
	{
		if (!is_seperator(*str, sep) && !word_flag)
		{
			word_cnt++;
			word_flag = 1;
		}
		if (is_seperator(*str, sep))
			word_flag = 0;
		str++;
	}
	return (word_cnt);
}

void		ft_strncpy(char *dest, char *src, int n)
{
	int		index;

	index = 0;
	while (index < n)
	{
		*dest = *src;
		dest++;
		src++;
		index++;
	}
	*dest = 0;
}

int			is_seperator(char c, char *sep)
{
	while (*sep)
	{
		if (c == *sep)
			return (1);
		sep++;
	}
	return (0);
}

void		ft_exe(char **map, char *str, char *sep)
{
	int		index;
	int		word_flag;
	char	*from;
	char	*to;

	word_flag = 0;
	index = 0;
	while (*str)
	{
		if ((!*(str + 1) || is_seperator(*str, sep)) && word_flag)
		{
			to = str;
			map[index] = (char *)malloc(sizeof(char) * (to - from + 1));
			ft_strncpy(map[index], from, to - from);
			index++;
			word_flag = 0;
		}
		if (!is_seperator(*str, sep) && !word_flag)
		{
			from = str;
			word_flag = 1;
		}
		str++;
	}
}

char		**ft_split(char *str, char *sep)
{
	int		word_count;
	char	**map;

	word_count = ft_word_count(str, sep);
	map = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!map)
		return (0);
	ft_exe(map, str, sep);
	map[word_count] = 0;
	return (map);
}
