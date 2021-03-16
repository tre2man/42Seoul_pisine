/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:55:16 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/16 14:52:39 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

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
	while (c[index])
	{
		ans->str[index] = c[index];
		index++;
	}
	ans->str[index] = '\0';
	ans->copy = c;
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*ans;

	i = 0;
	ans = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	while (i < ac)
	{
		ft_assign(&ans[i], *av);
		av++;
		i++;
	}
	ans[i].str = '\0';
	return (ans);
}
