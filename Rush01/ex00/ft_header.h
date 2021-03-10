/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seopark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:14:30 by seopark           #+#    #+#             */
/*   Updated: 2021/03/06 23:19:58 by seopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <unistd.h>

int		check_input(char *arr);
void	init(void);
void	dfs(int a);

void	check_cor_row_index(int i, int j, int amax, int bmax);
void	check_cor_col_index(int i, int j, int amax, int bmax);
int		check_cor_row(void);
int		check_cor_col(void);

void	print(void);
int		check(int x, int y, int input);
void	dfs_check(void);
#endif
