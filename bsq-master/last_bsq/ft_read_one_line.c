/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_one_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 04:54:23 by byu               #+#    #+#             */
/*   Updated: 2021/03/18 10:37:29 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*read_one_line(int fd)
{
	int		read_num;
	char	*buff;
	int		i;

	i = 0;
	g_buff_size = 1000000;
	buff = (char *)malloc(sizeof(char) * g_buff_size);
	read_num = 1;
	while (1)
	{
		if ((read_num = read(fd, buff, 1000000)) > 0)
		{
			i += read_num;
			buff = buff + read_num;
		}
		if (read_num == 0)
			break ;
	}
	return (buff - i);
}
