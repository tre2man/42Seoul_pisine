/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:44:31 by byu               #+#    #+#             */
/*   Updated: 2021/03/18 10:36:54 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int		ft_atoi(char *str, int n)
{
	int		result;
	int		index;

	index = 0;
	result = 0;
	while (index < n)
	{
		if ('0' <= *str && *str <= '9')
		{
			result = (result * 10) + (*str - '0');
		}
		else
			return (0);
		index++;
		str++;
	}
	return (result);
}
