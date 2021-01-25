/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadelia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:05:49 by fadelia           #+#    #+#             */
/*   Updated: 2021/01/25 17:32:25 by fadelia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len_i(int numb)
{
	int count;

	count = 0;
	if (numb == 0)
		count = 1;
	while (numb != 0)
	{
		numb /= 10;
		count++;
	}
	return (count);
}

void ft_putnbr(int nb)
{
	char s[20];
	int i;
	int len;
	
	i = 1;
	len = len_i(nb);
	if (nb < 0)
	{
		s[0] = '-';
		nb *= -1;	
		len++;
	}
	s[len] = '\0';
	while (nb != 0)
	{
		s[len - i] = nb % 10;
		nb /= 10;
		i++;
	}
	write (1, s, len);
}
