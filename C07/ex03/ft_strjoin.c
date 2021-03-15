/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 14:21:35 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/11 21:13:51 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void		ft_assign_ans(char **strs, char *ans, char *sep, int size)
{
	int		strs_len;
	int		len;
	int		malloc_len;

	malloc_len = 0;
	len = -1;
	while (++len < size)
	{
		strs_len = 0;
		while (strs[len][strs_len])
			ans[malloc_len++] = strs[len][strs_len++];
		strs_len = 0;
		if (len != size - 1)
			while (sep[strs_len])
				ans[malloc_len++] = sep[strs_len++];
	}
	ans[malloc_len] = '\0';
}

int			ft_str_len(char *str)
{
	int		index;

	index = 0;
	while (*(str++))
		index++;
	return (index);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		strs_len;
	int		sep_len;
	int		malloc_len;
	char	*ans;

	if (!strs)
	{
		ans = (char*)malloc(sizeof(char));
		ans[0] = '\0';
		return (ans);
	}
	sep_len = ft_str_len(sep);
	len = 0;
	malloc_len = 0;
	while (len < size)
	{
		strs_len = ft_str_len(strs[len]);
		malloc_len += strs_len;
		len++;
	}
	ans = (char*)malloc(sizeof(char) * (1 + malloc_len + (len - 1) * sep_len));
	ft_assign_ans(strs, ans, sep, size);
	return (ans);
}
