/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:27:55 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/01 16:45:37 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char src[100] = "good morning";
	char dst[100] = "hello";
	//char src_1[100] = "good morning";
	//char dst_1[100] = "hello";
	printf("%u %s\n" , ft_strcmp(dst, src), dst);
	//printf("%u %s\n", ft_strlcat(dst, src, 7), dst);
}

