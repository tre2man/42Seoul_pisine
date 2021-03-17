/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:43:24 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/17 11:08:05 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *c)
{
	int		i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int			ft_is_available(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

char		*index_to_str(int start, int end, char *c)
{
	int		len;
	int		index;
	char	*ans;

	if (start > end)
		return (0);
	len = end - start + 2;
	index = 0;
	ans = (char*)malloc(sizeof(char) * len);
	while (start <= end)
	{
		ans[index] = c[start];
		index++;
		start++;
	}
	ans[index] = '\0';
	return (ans);
}

void		ft_assign_word(char **ans, char *str, char *charset)
{
	char	*assign;
	int		index;
	int		start;

	index = 0;
	start = 0;
	while (str[++index])
	{
		if (ft_is_available(str[index - 1], charset) &&
				!ft_is_available(str[index], charset))
		{
			start = index;
		}
		if (!ft_is_available(str[index - 1], charset) &&
				ft_is_available(str[index], charset))
		{
			*ans = index_to_str(start, index - 1, str);
			ans++;
		}
	}
	*ans = index_to_str(start, index - 1, str);
	*(++ans) = 0;
}

char		**ft_split(char *str, char *charset)
{
	char	**ans;
	char	*input;
	int		index;
	int		str_sum_len;

	str_sum_len = 0;
	if (!ft_is_available(*str, charset))
		str_sum_len++;
	index = 0;
	while (str[++index])
	{
		if (!ft_is_available(str[index - 1], charset) &&
				ft_is_available(str[index], charset))
		{
			str_sum_len++;
		}
	}
	ans = (char**)malloc(sizeof(char*) * (str_sum_len + 1));
	ft_assign_word(ans, str, charset);
	return (ans);
}
