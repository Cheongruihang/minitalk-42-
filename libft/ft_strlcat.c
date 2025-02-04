/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:07:57 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/06/21 16:22:38 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	if ((!dst || !src) && !dstsize)
		return (0);
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	i = 0;
	while (dstsize <= dest_len)
		return (src_len + dstsize);
	while (src[i] && dest_len + i < dstsize - 1)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int main (void)
{
	char *dst ="";
	char *src ="uisdfhisu";
	printf("%zu",ft_strlcat(dst,src,0));
	return (0);
}
*/
