/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:12:23 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/17 17:44:00 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <libgen.h>
#include <string.h>

void	ft_putstr(char *c)
{
	while (*c)
		write(1, c++, 1);
}

void	ft_display_file(int fd)
{
	int	size;
	char	input;


	size = read(fd, &input, 1);
	while (size)
	{
		write(1, &input, 1);
		size = read(fd, &input, 1);
	}
	close(fd);
}

int 		main(int argc, char **argv)
{
	int	file_num = 0;
	int	fd = 0;

	if (argc == 1)
		ft_display_file(fd);
	else
	{
		file_num = 0;
		while (++file_num < argc)
		{
			if ((fd = open(argv[file_num], O_RDONLY)) == -1)
				ft_putstr("Error.\n");
			else
				ft_display_file(fd);
		}
	}
	return (0);
}
