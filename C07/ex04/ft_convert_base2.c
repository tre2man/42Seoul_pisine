/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namwkim <namwkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 11:01:00 by namwkim           #+#    #+#             */
/*   Updated: 2021/03/08 15:42:48 by namwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_num(char input, char *base);
int	ft_base_len(char *base);
int	ft_is_available(char input, char *base);

int	nbr_to_int(char *nbr, char *base_from, int base_len)
{
	int	ans;
	int	index;
	char	*temp;
	int	minus;
	
	temp = nbr;
	if (*nbr == '-')
	{
		index = 1;
		minus = 1;
	}
	else
	{
		index = 0;
		minus = 0;
	}
	while (ft_is_available(temp[index], base_from))
	{
		ans = (ans * base_len) + ft_num(nbr[index], base_from);
		index++;
	}
	if (minus)
		return (-ans);
	else
		return (ans);
}

char	*nbr_to_ans(int nbr, char *base_to)
{
	int	index;
	int	base_len;
	char	*temp;

	index = 0;
	ans_len = nbr / ft_base_len(base_to) + 2;
	temp = (char*)malloc(sizeof(char) * ans_len);
	temp[ans_len - 1] = '\0';
	while (nbr > ft_base_len(base_to))
	{
		temp[--ans_len] = base_to[nbr % ft_base_len(base_to)];
		nbr /= ft_base_len(base_to);
	}
	return temp;
}
