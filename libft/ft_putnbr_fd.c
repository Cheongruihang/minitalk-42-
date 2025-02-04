/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:51:51 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/06/20 16:50:55 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char n, int fd)
{
	write (fd, &n, 1);
}

static void	ft_putnbr(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (fd, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr (nb / 10, fd);
		ft_putnbr (nb % 10, fd);
	}
	else
		ft_putchar (nb + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr(n, fd);
}
