/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:55:16 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/11 11:11:45 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

t_stock_str			ft_av_to_struct(char *c)
{
	t_stock_str		ans;
	int				len;
	char 			*str;
	char 			*copy;
	
	len = 0;
	while(c[len])
		len++;
	str = (char*)malloc(sizeof(char) * len);
	len = 0;
	while(c[len])
	{
		str[len] = c[len];
		len++;
	}
	str[len] = '\0';
	ans.size = len;
	ans.str = str;
	ans.copy = ans.str;
	return (ans);
}

t_stock_str			*ft_strs_to_tab(int ac, char **av)
{
	int				ans_len;
	char			*ans_str;
	char			*ans_copy;
	t_stock_str		*ans;

	ans_len = 0;
	if (!av || !*av)
		return (0);
	while(av[ans_len])
		ans_len++;
	ans = (t_stock_str*)malloc(sizeof(t_stock_str) * ans_len);
	ans_len = 0;
	while (*av)
	{
		ans[ans_len] = ft_av_to_struct(*av);
		av++;
		ans_len++;
		printf("1");
	}
	return (ans);
}

int main()
{
	t_stock_str *ans;
	char **a = (char**)malloc(sizeof(char*) * 3);
	a[0] = "123";
	a[1] = "asdf";
	a[2] = "5678";
	ans = ft_strs_to_tab(3,a);
}
