/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 14:59:08 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/06 23:36:29 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int argc, char **argv)
{
	if (argc != 2 || argv[2] || !check_input(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else
	{
		check_input(argv[1]);
		init();
		dfs(0);
	}
}
