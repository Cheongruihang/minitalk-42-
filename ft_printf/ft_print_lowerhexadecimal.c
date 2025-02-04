/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lowerhexadecimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:56:50 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/08/07 19:50:13 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_lowerhexadecimal(unsigned int c)
{
	const char	*d;
	int			count;

	count = 0;
	d = "0123456789abcdef";
	if (c < 16)
	{
		write (1, &d[c], 1);
		return (1);
	}
	else
	{
		count += ft_print_lowerhexadecimal(c / 16);
		count += ft_print_lowerhexadecimal(c % 16);
	}
	return (count);
}
/*
int main (void)
{
    printf("%x\n",2147483647);
    printf ("%d",print_hexadecimal(2147483647));
    return (0);
}
*/
