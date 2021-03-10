/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:28:45 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/02 16:40:00 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *a)
{
	while (*a)
	{
		write (1, &(*(a++)), 1);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	index;

	index = 0;
	while (argv[index])
		index++;
	while (--index > 0)
		ft_rev_params(argv[index]);
}
