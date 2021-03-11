/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 19:07:29 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/11 17:00:12 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int			ft_isspace(char c)
{
	if (c >= 9 && c <= 13)
		return (1);
	if (c == ' ')
		return (1);
	return (0);
}

int			ft_atoi(char *str)
{
	int		index;
	int		minus;
	int		ans;

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
