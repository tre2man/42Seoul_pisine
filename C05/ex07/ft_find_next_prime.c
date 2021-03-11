/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 23:25:13 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/11 10:40:00 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is__prime(int nb)
{
	int		num;

	num = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	else
	{
		while (num <= nb / num)
		{
			if (!(nb % num))
				return (0);
			num++;
		}
	}
	return (1);
}

int			ft_find_next_prime(int nb)
{
	int		ans;

	ans = 2;
	if (nb < 2)
		return (2);
	while (1)
	{
		if (ft_is__prime(++nb))
			return (nb);
	}
}
