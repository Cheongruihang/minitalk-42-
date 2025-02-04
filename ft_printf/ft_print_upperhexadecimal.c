/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_upperhexadecimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:00:53 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/08/07 20:01:37 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_upperhexadecimal(unsigned int c)
{
	const char	*d;
	int			count;

	count = 0;
	d = "0123456789ABCDEF";
	if (c < 16)
	{
		write (1, &d[c], 1);
		return (1);
	}
	else
	{
		count += ft_print_upperhexadecimal(c / 16);
		count += ft_print_upperhexadecimal(c % 16);
	}
	return (count);
}
