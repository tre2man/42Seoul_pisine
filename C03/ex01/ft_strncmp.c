/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 00:27:34 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/01 00:29:29 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2, unsigned int n);
{
	int	index;

	index = 0;
	while (s1[index] && s2[index] && index < n)
	{
		if (s1[index] > s2[index])
			return (1);
		else if (s1[index] < s2[index])
			return (-1);
		index++;
	}
	if (s1[index])
		return (1);
	else if (s2[index])
		return (-1);
	else
		return (0);
}
