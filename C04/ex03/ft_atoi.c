/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 19:07:29 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/11 23:54:58 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int minus;
	int ans;

	minus = 1;
	ans = 0;
	while (*str != '+' && *str != '-')
		str++;
	while (*str == '-' || *str == '+' || *(str + 1) == '-')
	{
		str++;
		minus *= -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		ans = (ans * 10) + minus * (*str - '0');
		str++;
	}
	return (ans);
}
