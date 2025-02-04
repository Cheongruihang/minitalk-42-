/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 17:40:14 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/08/07 20:08:28 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_checker(va_list args, char c)
{
	int	length;

	length = 0;
	if (c == 'c')
		length += ft_putchar(va_arg(args, int));
	else if (c == 's')
		length += ft_print_string(va_arg(args, char *));
	else if (c == 'p')
		length += ft_print_pointer(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		length += print_decimal(va_arg(args, int));
	else if (c == 'u')
		length += ft_print_unsignednum(va_arg(args, unsigned int));
	else if (c == 'x')
		length += ft_print_lowerhexadecimal(va_arg(args, unsigned int));
	else if (c == 'X')
		length += ft_print_upperhexadecimal(va_arg(args, unsigned int));
	else if (c == '%')
		length += ft_putchar(c);
	return (length);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			length += format_checker(args, str[i]);
		}
		else
			length += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}
