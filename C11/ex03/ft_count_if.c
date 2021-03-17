/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 18:06:07 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/17 18:09:03 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	count;
	int	i;

	i = -1;
	count = 0;
	while (++i < length)
	{
		if (f(*tab))
			count++;
		tab++;
	}
	return (count);
}
