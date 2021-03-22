/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:43:24 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/18 22:51:13 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (*(str++))
		i++;
	return (i);
}

int ft_is_availabe(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

int ft_get_strnum(char *str, char *charset)
{
	int ans;

	ans = 0;
	while (*str)
	{
		if (!ft_is_availabe(*str, charset))
		{
			ans++;
			while (*str && !ft_is_availabe(*str, charset))
				str++;
		}
		str++;
	}
	return (ans);
}

void ft_until_strcpy(char *dest, char *from, char *until)
{
	while (from < until)
		*(dest++) = *(from++);
	*dest = 0;
}

char **ft_split(char *str, char *charset)
{
	char **ans;
	char *temp;
	int sum_str;
	int i;

	i = 0;
	sum_str = ft_get_strnum(str, charset);
	ans = (char **)malloc(sizeof(char *) * (sum_str + 1));
	if (!ans)
		return (0);
	while (*str)
	{
		if (!ft_is_availabe(*str, charset))
		{
			temp = str;
			while (*str && !ft_is_availabe(*str, charset))
				str++;
			ans[i] = (char *)malloc(sizeof(char) * (str - temp + 1));
			ft_until_strcpy(ans[i++], temp, str);
		}
		str++;
	}
	ans[i] = 0;
	return (ans);
}
