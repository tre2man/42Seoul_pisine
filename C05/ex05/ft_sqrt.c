/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 23:07:04 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/11 16:16:48 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	ans;

	ans = 1;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	while (ans != nb && ans <= nb / ans)
	{
		if ((nb / ans) == ans)
			return (ans);
		ans++;
	}
	return (0);
}
