/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:55:24 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/06/12 19:16:44 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const void	*s_p;

	s_p = s;
	while (n--)
	{
		if (*(unsigned char *)s_p++ == (unsigned char)c)
			return ((void *)(unsigned char *)s_p - 1);
	}
	return (NULL);
}
