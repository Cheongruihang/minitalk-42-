/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:34:22 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/06/20 16:34:41 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	long	len_s1;
	long	len_s2;
	char	*dest;
	char	*dest_ptr;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	dest = malloc(((len_s1 + len_s2) * sizeof(char)) + 1);
	if (!dest)
		return (NULL);
	dest_ptr = dest;
	while (*s1)
		*dest ++ = *s1++;
	while (*s2)
		*dest ++ = *s2++;
	*dest = '\0';
	return (dest_ptr);
}
