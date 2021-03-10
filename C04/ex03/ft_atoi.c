/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 19:07:29 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/08 17:01:26 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	index;
	int	minus;
	int	ans;

	index = 0;
	minus = 1;
	ans = 0;
	while (str[index] < '0' || str[index] > '9')
	{
		if (str[index] == '-')
			minus *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		ans = (ans * 10) + minus * (str[index] - '0');
		index++;
	}
	return (ans);
}
