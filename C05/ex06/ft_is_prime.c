/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 23:19:51 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/09 00:05:06 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_prime(int nb)
{
	int		num;

	num = 1;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	else
	{
		while (++num < nb)
		{
			if (!(nb % num))
				return (0);
		}
	}
	return (1);
}
