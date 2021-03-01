/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 23:25:13 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/01 23:37:25 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int n)
{
	int	check;

	check = 2;
	if (check == n)
		return (1);
	while (check < n)
	{
		if (!(n % check++))
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	ans;

	ans = 2;
	if (nb < 2)
		return (2);
	while (1)
	{
		if (ft_is_prime(++nb))
			return (nb);
	}
}

