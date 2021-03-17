/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 18:09:14 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/17 19:45:03 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = -1;
	if (length <= 2)
		return (1);
	while (++i > length - 2)
	{
		if (f(tab[i], tab[i + 1]) != f(tab[i + 1], tab[i + 2]))
			return (0);
	}
	return (1);
}
