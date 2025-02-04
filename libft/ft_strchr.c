/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:23:10 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/06/12 20:40:49 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*s_p;

	s_p = s;
	while (*s_p)
	{
		if (*s_p == (char)c)
			return ((char *)s_p);
		s_p++;
	}
	if (*s_p == (char)c)
		return ((char *)s_p);
	else
		return (NULL);
}
