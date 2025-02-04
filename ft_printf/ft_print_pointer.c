/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:11:44 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/08/10 10:59:16 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(uintptr_t c)
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
		count += ft_putpointer(c / 16);
		count += ft_putpointer(c % 16);
	}
	return (count);
}

int	ft_print_pointer(unsigned long long ptr)
{
	int	length;

	length = 0;
	length += write(1, "0x", 2);
	if (!ptr)
		length += write(1, "0", 1);
	else
		length += ft_putpointer(ptr);
	return (length);
}

/*
int main() {
    unsigned long long test_ptr1 = 0x123456789abcdef0ULL;
    unsigned long long test_ptr2 = 0;
    unsigned long long test_ptr3 = 0x7fffffffd000ULL;
    int length1 = print_pointer(test_ptr1);
    printf("\nPrinted output: %p\n\n", test_ptr1);
    printf("\nLength of printed output: %d\n\n", length1);

    int length2 = print_pointer(test_ptr2);
    printf("\nLength of printed output: %d\n\n", length2);

    int length3 = print_pointer(test_ptr3);
    printf("\nLength of printed output: %d\n\n", length3);

    return 0;
}
*/
