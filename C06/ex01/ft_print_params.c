/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:56:36 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/09 10:49:15 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *a)
{
	while (*a)
		write(1, &(*(a++)), 1);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int	index;
	
	index = 1;
	while (index < argc)
		ft_print_params(argv[index++]);		
	return (0);
}
