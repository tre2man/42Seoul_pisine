/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:00:59 by byu               #+#    #+#             */
/*   Updated: 2021/03/18 10:50:58 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

extern int			g_int[3];
extern char			g_char[3];
extern int			g_buff_size;

int					open_file(char *file);
char				*up_size_buff(char *buff);
char				*read_file(int fd);
char				**make_second_char_map(char *buff);
int					**make_second_int_map(void);
int					**init_second_int_map(char **second_char_map,
											int **second_int_map);

int					is_valid_line_num(char **second_char_map);
int					is_valid_char(void);
void				print_error(void);
int					is_valid_num(void);
int					is_row_len_same(char **second_char_map);
void				ft_start(char *ptr);
void				ft_start2(void);

int					ft_strlen(char *str);
int					ft_atoi(char *str, int n);
char				**ft_split(char *str, char *sep);
void				ft_exe(char **map, char *str, char *sep);
int					is_seperator(char c, char *sep);
void				ft_strncpy(char *dest, char *src, int n);
int					ft_word_count(char *str, char *sep);
void				bsq(int **second_int_map);
void				ft_free_str(char **str, int row_len);
void				ft_free_ints(int **input, int row_len);
char				*read_one_line(int fd);

typedef	struct		s_space
{
	int				x;
	int				y;
	int				value;
}					t_space;

int					ft_min_2(int a, int b);
int					ft_min_3(int a, int b, int c);

t_space				ft_fill_num(int **map, int a, int b, char *print_str);
void				ft_fill_num_one(int **map, int a, int b, t_space *ans);
void				ft_fill_num_non_one(int **map, int a, int b, t_space *ans);
void				ft_fill_square(int **map, t_space start);

void				ft_putchar(char c);
void				ft_print_map(int **map, int x, int y, char *print_str);
void				ft_putstr(char *c);

#endif
