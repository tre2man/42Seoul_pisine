/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 11:01:00 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/17 11:04:39 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *c)
{
	int		len;

	len = 0;
	while (c[len])
		len++;
	return (len);
}

void		ft_rev(char *input)
{
	int		start;
	int		end;
	int		index;
	char	temp;

	if (*input == '-')
		start = 1;
	else
		start = 0;
	end = ft_strlen(input);
	index = start;
	while (index < (start + end) / 2)
	{
		temp = input[index];
		input[index] = input[end - index + start - 1];
		input[end - index + start - 1] = temp;
		index++;
	}
}

char		*ft_conv(int input, char *base)
{
	int		len;
	int		index;
	char	*ans;

	index = 0;
	len = ft_strlen(base);
	ans = (char*)malloc(sizeof(char) * 100);
	if (input < 0)
	{
		ans[index++] = '-';
		input *= -1;
	}
	if (input == 0)
		ans[index++] = '0';
	while (input > 0)
	{
		ans[index++] = base[input % ft_strlen(base)];
		input /= ft_strlen(base);
	}
	ft_rev(ans);
	ans[index] = '\0';
	return (ans);
}
