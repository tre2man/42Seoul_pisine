/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:06:02 by namwkim           #+#    #+#             */
/*   Updated: 2021/02/24 11:36:33 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		index;
	int		temp;

	index = -1;
	while (++index < size / 2)
	{
		temp = tab[index];
		tab[index] = tab[size - index - 1];
		tab[size - index - 1] = temp;
	}
}
