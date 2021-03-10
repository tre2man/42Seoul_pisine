/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:56:36 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/02 13:10:43 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *a)
{
	while (*a)
	{
		write (1, &(*(a++)), 1);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	*argv++;
	while (*argv)
		ft_print_params(*argv++);
}
