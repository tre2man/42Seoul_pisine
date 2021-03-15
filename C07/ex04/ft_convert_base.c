/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 10:53:39 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/11 10:59:20 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			ft_base_correct(char *base)
{
	int		i;
	int		j;

	i = -1;
	if (!base[0] || !base[1])
		return (0);
	while (base[++i])
	{
		j = -1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[++j])
		{
			if (i != j && base[i] == base[j])
				return (0);
		}
	}
	return (1);
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	
	char	*ans_str;
	int		ans_int;

	ans = -1;
	if (!ft_base_correct(base_from) || !ft_base_correct(base_to))
		return (NULL);
	ans_int = ft_atoi(nbr);
	ans_str = 
	return (ans_str);
}

int main()
{
	printf("%s",ft_convert_base("15","0123456789","01"));
}
