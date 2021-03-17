/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:44:50 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/16 17:41:52 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_params(char *a)
{
	while (*a)
		write(1, &(*(a++)), 1);
	write(1, "\n", 1);
}

int			ft_strcmp(char *s1, char *s2)
{
	int		index;

	index = 0;
	while (s1[index] && s2[index])
	{
		if (s1[index] > s2[index])
			return (1);
		else if (s1[index] < s2[index])
			return (-1);
		index++;
	}
	if (s1[index])
		return (1);
	else if (s2[index])
		return (-1);
	else
		return (0);
}

void		ft_sort(char **input, int len)
{
	int		i;
	int		j;
	char	*temp;

	if (len == 1)
		return ;
	i = 1;
	while (i < len - 1)
	{
		j = 1;
		while (j < len - 1)
		{
			if (ft_strcmp(input[j], input[j + 1]) == 1)
			{
				temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int			main(int argc, char **argv)
{
	int		len;

	len = 0;
	ft_sort(argv, argc);
	while (argv[++len])
		ft_print_params(argv[len]);
	return (0);
}
