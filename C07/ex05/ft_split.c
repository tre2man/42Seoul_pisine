/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:43:24 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/08 17:01:20 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *c)
{
	int 	i;
	
	i = 0;
	while (c[index])
		index++;
	return index;
}

int	ft_malloc_len(char *str, char *charset)
{
	
}

char	**ft_split(char *str, char *charset)
{
	char **ans;
}

int main()
{
	char **ans;
	int i;
	ans = ft_split("zxxzazxzxxazxxzxzbxxzxzczx","abc");
	printf("%s",ans[0]);
}
