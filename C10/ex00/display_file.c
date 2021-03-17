/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:21:56 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/17 16:09:58 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void		ft_putstr(char *c)
{
	while (*c)
		write(1, c++, 1);
}

int		main(int argc, char **argv)
{
	int 	fd;
	int 	size;
	char 	input;

	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
			ft_putstr("Cannot read file.\n");
		else
		{
			size = read(fd, &input, 1);
			while (size)
			{
				write(1, &input, 1);
				size = read(fd, &input, 1);
			}
			close(fd);
		}
	}
	return (0);
}
