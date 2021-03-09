/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 23:33:54 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/09 19:52:00 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_arr[16];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_third(void *ptr, int start, int size)
{
	char	*out;
	int		index;

	index = start + 16;
	out = (char*)ptr;
	while (start < index && start < size)
	{
		if (*(out + start) < ' ' || *(out + start) > '~')
			ft_putchar('.');
		else
			ft_putchar(*(out + start));
		start++;
	}
}

void	ft_print_second(void *ptr, int start, int size)
{
	char	*out;
	int		index;
	int		even;

	even = 0;
	index = start + 16;
	out = (char*)ptr;
	while (start < index && start < size)
	{
		ft_putchar(g_arr[*(out + start) / 16]);
		ft_putchar(g_arr[*(out + start) % 16]);
		if (even % 2)
			write(1, " ", 1);
		write(1, "  ", 2);
		start++;
		even++;
	}
}

void	ft_print_first(long long addr, int now)
{
	if (now > 1)
		ft_print_first(addr / 16, now - 1);
	ft_putchar(g_arr[addr % 16]);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	index;
	long	long	ptr;

	index = -1;
	while (++index < 10)
	{
		g_arr[index] = index + '0';
	}
	while (index < 16)
	{
		g_arr[index] = index + 87;
		index++;
	}
	index = 0;
	ptr = (long long)addr;
	while (index < size)
	{
		ft_print_first(ptr + index, 16);
		write(1, ": ", 2);
		ft_print_second(addr, index, size);
		ft_print_third(addr, index, size);
		ft_putchar('\n');
		index += 16;
	}
	return (addr);
}
