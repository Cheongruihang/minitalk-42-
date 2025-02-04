/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:42:28 by chrui-ha          #+#    #+#             */
/*   Updated: 2025/01/21 15:32:44 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_print_lowerhexadecimal(unsigned int c);
int		print_decimal(int c);
int		ft_print_string(char *s);
int		ft_print_unsignednum(unsigned int c);
int		ft_print_string(char *s);
int		ft_print_upperhexadecimal(unsigned int c);
int		ft_putchar(char c);
int		ft_print_pointer(unsigned long long ptr);
int		ft_printf(const char *str, ...);
char	*ft_unsigned_itoa(unsigned int n);
char	*ft_itoa(int n);
int		ft_ptr_len(uintptr_t num);
int		ft_putpointer(uintptr_t c);

#endif
