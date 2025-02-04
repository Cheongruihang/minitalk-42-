/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:51:16 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/06/12 20:55:56 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s_p;
	int			l;

	l = ft_strlen(s);
	s_p = s + l;
	while (l--)
	{
		if (*s_p == (char)c)
			return ((char *)s_p);
		s_p--;
	}
	if (*s_p == (char)c)
		return ((char *)s_p);
	else
		return (NULL);
}
/*
int main( void )
{
    char *s ="The cake is a lie !\0";
    printf("%s",strrchr(s,' '));
    return (0);
}
*/
