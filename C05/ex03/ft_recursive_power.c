/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 22:55:25 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/09 17:56:10 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (!power)
		return (1);
	else if (power == 1)
		return (nb);
	else
		return (ft_recursive_power(nb, power - 1) * nb);
}
