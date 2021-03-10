/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 10:53:39 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/08 15:42:50 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	g_arr[16];

extern char	*nbr_to_ans(int nbr, char *base_from);

int	ft_is_available(char input, char *base)
{
	int	index;

	index = -1;
	while (base[++index])
	{
		if (base[index] == input)
			return (1);
	}
	return (0);
}

int	ft_base_len(char *base)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	return (base_len);
}

int	ft_base_correct(char *base)
{
	int	i;
	int	j;

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	index;
	int	ans;
	int	base_from_len;
	int	base_to_len;
	char	*ans_s;

	ans = -1;
	if (!ft_base_correct(base_from) || !ft_base_correct(base_to))
		return (NULL);
	base_from_len = ft_base_len(base_from);
	base_to_len = ft_base_len(base_to);
	ans = nbr_to_int(nbr, base_from, base_from_len);
	ans_s = nbr_to_ans(ans, base_to);
	return (ans_s);
}
