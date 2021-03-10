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

int	ft_assign_char_len(char *str, char *charset)
{
	int	ans;
	char	*temp;

	ans = 0;
	temp = str;
	while (!ft_available_char(*temp, charset))
		ans++;
	return (ans);
}

char	*ft_assign_char(char *str, char *charset, int len)
{
	char *ans;
	char *temp;

	temp = str;
	ans = (char*)malloc(sizeof(char) * len + 1);
}

int	ft_available_char(char c, char *charset)
{
	char *temp;

	temp = charset;
	while (*temp)
	{
		if (c == *charset)
			return (1);
		temp++;
	}
	return (0);
}

int	ft_available_char_sum(char *str, char *charset)
{
	int	str_index;
	int	charset_index;
	int	ans;

	ans = 0;
	str_index = -1;
	while (str[++str_index])
	{
		charset_index = -1;
		while (charset[++charset_index])
		{
			if (str[str_index] == charset[charset_index])
			{
				ans++;
				break;
			}
		}
	}
	return (ans - 1);
}

char	**ft_split(char *str, char *charset)
{
	char	*temp;
	char	**ans;
	int	ans_num;
	int	index;

	ans_num = ft_available_char_sum(str, charset);
	ans = (char**)malloc(sizeof(char*) * (ans_num + 1));
	if (!ans_num)
	{
		*ans = NULL;
		return (ans);
	}
	index = 0;
	while (*str)
	{
		if (ft_available_char(*str, charset) && ans_num > 0)
		{
			temp = ft_assign_char(str, charset, ft_assign_char_len(str, charset)); 
			ans_num--;
		}
		ans[index] = (char*)malloc(sizeof(char) * ft_assign_char_len(str, charset) + 1);
		ans[index++] = temp;
		str++;
	}
	return (ans);
}
