/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsignednum.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:52:17 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/08/07 19:59:45 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsignednum(unsigned int c)
{
	int		num;
	char	*n;

	num = 0;
	if (c == 0)
		num += write(1, "0", 1);
	else
	{
		n = ft_unsigned_itoa(c);
		num += ft_print_string(n);
		free (n);
	}
	return (num);
}
/*
int main (void)
{
    printf("%u",ft_print_unsignednum(-2));
    return (0);
}
*/
