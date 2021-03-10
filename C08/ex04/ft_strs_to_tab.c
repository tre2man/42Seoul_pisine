/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:55:16 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/09 16:24:21 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

struct s_stock_str		ft_av_to_struct(char *c)
{
	struct t_stock_str	ans;
	int					len;

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int					ans_len;
	char				*ans_str;
	char				*ans_copy;
	struct t_stock_str	*ans;

	ans_len = 0;
	if (!av || !*av)
		return (0);
	while(av[ans_len])
		ans_len++;
	ans = (s_stock_str*)malloc(sizeof(s_stock_str) * ans_len);
	ans_len = 0;
	
