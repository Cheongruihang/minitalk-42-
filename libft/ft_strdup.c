/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:36:06 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/06/12 20:42:21 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*c;
	int		i;
	int		j;

	i = ft_strlen((char *)src);
	j = 0;
	c = (char *)malloc(sizeof(char) * (i + 1));
	if (c != NULL)
	{
		while (src[j] != '\0')
		{
			c[j] = src[j];
			j++;
		}
		c[j] = '\0';
		return (c);
	}
	return (NULL);
}
