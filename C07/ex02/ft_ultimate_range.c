/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 23:53:18 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/03 00:55:25 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;

	if (min <= max)
		return (NULL);
	length = max - min;
	*range = (int*)malloc(sizeof(int) * length);
	if (!*range)
		return (-1);
	while (min < max)
		*range[index] = min++;
	return (length);
}
