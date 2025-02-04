/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:27:24 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/06/12 19:19:32 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const void	*s1_p;
	const void	*s2_p;

	s2_p = s2;
	s1_p = s1;
	while (n--)
	{
		if (*(unsigned char *)s1_p != *(unsigned char *)s2_p)
			return (*(unsigned char *) s1_p - *(unsigned char *)s2_p);
		s1_p++;
		s2_p++;
	}
	return (0);
}
