/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 23:07:04 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/11 21:46:30 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	ans;

	ans = 2;
	if (nb < 1 && nb == 2)
		return (0);
	if (nb == 1)
		return (1);
	while (ans <= nb / ans)
	{
		if (!(nb % ans) && (ans == nb / ans))
			return (ans);
		ans++;
	}
	return (0);
}
