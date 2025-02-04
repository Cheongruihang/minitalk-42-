/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_itoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 21:31:28 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/08/07 20:11:55 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long	length(long n)
{
	int		i;
	long	nb;

	i = 0;
	nb = n;
	if (nb < 1)
		i ++;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	char	*c;
	long	i;

	i = length(n);
	c = (char *)malloc((i + 1) * sizeof(char));
	if (!c)
		return (NULL);
	*(c + i) = '\0';
	while (n != 0)
	{
		c[i - 1] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return (c);
}
