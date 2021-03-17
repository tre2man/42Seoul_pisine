/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:55:16 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/17 10:30:52 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char					*ft_strdup(char *src)
{
	char				*ans;
	int					src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	ans = (char *)malloc(sizeof(char) * src_len);
	src_len = 0;
	while (src[src_len])
	{
		ans[src_len] = src[src_len];
		src_len++;
	}
	ans[src_len] = '\0';
	return (ans);
}

int						ft_strlen(char *c)
{
	int					i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

void					ft_assign(t_stock_str *ans, char *c)
{
	int					index;

	index = 0;
	ans->size = ft_strlen(c);
	ans->str = (char*)malloc(sizeof(char) * (ans->size + 1));
	ans->str = ft_strdup(c);
	ans->copy = (char*)malloc(sizeof(char) * (ans->size + 1));
	ans->copy = ft_strdup(c);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*ans;

	i = -1;
	ans = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!ans)
		return (0);
	while (++i < ac)
	{
		ft_assign(&ans[i], *av);
		av++;
	}
	ans[i].str = 0;
	return (ans);
}
