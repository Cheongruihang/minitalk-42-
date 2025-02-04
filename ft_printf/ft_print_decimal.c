/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:09:52 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/08/07 19:47:41 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_decimal(int c)
{
	int		num;
	char	*n;

	num = 0;
	n = ft_itoa(c);
	while (n[num] != '\0')
	{
		write (1, &n[num], 1);
		num++;
	}
	free (n);
	return (num);
}
