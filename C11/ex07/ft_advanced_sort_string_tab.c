/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 19:09:50 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/18 21:42:14 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_advanced_sort_string_tab(char **tab, int (*cmp)(char*, char*))
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (tab[i + 1])
	{
		j = 0;
		while (tab[j + 2])
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
