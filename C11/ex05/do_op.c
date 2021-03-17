/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 18:13:46 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/17 19:46:56 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putnbr(int num)
{
	char	c;

	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num > 10)
		ft_putnbr(num / 10);
	c = num % 10 + '0';
	write(1, &c, 1);
}

int		ft_opr(char *c)
{
	if (c[1])
		return (0);
	else if (c[0] == '+')
		return (1);
	else if (c[0] == '-')
		return (2);
	else if (c[0] == '*')
		return (3);
	else if (c[0] == '/')
		return (4);
	else if (c[0] == '%')
		return (5);
	else
		return (0);
}

int			ft_cal(int front, int rear, int cal)
{
	if (cal == 1)
		return (front + rear);
	else if (cal == 2)
		return (front - rear);
	else if (cal == 3)
		return (front * rear);
	else if (cal == 4)
		return (front / rear);
	else if (cal == 5)
		return (front % rear);
	else
		return (0);
}

int			ft_atoi(char *str)
{
	int		minus;
	int		ans;

	minus = 1;
	ans = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ans = (ans * 10) + minus * (*str - '0');
		str++;
	}
	return (ans);
}

int			main(int argc, char **argv)
{
	int 	front;
	int		rear;
	int		(*fp)(char*);

	fp = ft_opr;
	if (argc != 4)
		return (0);
	else
	{
		front = ft_atoi(argv[1]);
		rear = ft_atoi(argv[3]);
	}
	if (!rear && fp(argv[2]) == 4)
		write(1, "Stop : division by zero\n", 24);
	else if (!rear && fp(argv[2]) == 5)
		write(1, "Stop : modulo by zero\n", 22);
	else
	{
		ft_putnbr(ft_cal(front, rear, fp(argv[2])));
		write(1, "\n", 1);
	}
	return (0);
}
