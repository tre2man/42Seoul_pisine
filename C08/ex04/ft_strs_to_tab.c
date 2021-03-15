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

int	ft_strlen(char *c)
{
	int	i;
	
	i = 0;
	while (c[i])
		i++;
	return (i);
}

void	ft_assign(t_stock_str *ans, char *c)
{
	int	index;
	
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















void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putstr(char *c)
{
        while (*c)
                ft_putchar(*(c++));
}

void    ft_putnum(int a)
{
    if (a > 9)
		ft_putnum(a / 10);
	ft_putchar((a % 10) + '0');
}

void    ft_show_tab(struct s_stock_str *par)
{
        while (par->str)
        {
                ft_putstr(par->str);
                ft_putstr("\n");
                ft_putnum(par->size);
                ft_putstr("\n");
                ft_putstr(par->copy);
                ft_putstr("\n");
                par++;
        }
}

int main()
{
	struct s_stock_str *ans;
	char **a = (char**)malloc(sizeof(char*) * 4);
	a[0] = "1111111111";
	a[1] = "asdf";
	a[2] = "5678";
	a[3] = '\0';
	ans = ft_strs_to_tab(3,a);
	ft_show_tab(ans);
}
