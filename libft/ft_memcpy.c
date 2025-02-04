/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:40:24 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/06/12 19:21:59 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*dst_p;

	dst_p = dst;
	if (!dst && !src)
		return (dst);
	while (n--)
		*(char *)dst_p++ = *(char *)src++;
	return (dst);
}
