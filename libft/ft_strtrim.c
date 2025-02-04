/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:56:11 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/06/20 16:43:35 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check(char const *str, char const c)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	int		first;
	int		last;
	int		place;

	if (!s1 || !set)
		return (NULL);
	first = 0;
	while (*(s1 + first) && check(set, *(s1 + first)))
		first++;
	last = ft_strlen(s1);
	while (last > first && check(set, *(s1 + (last - 1))))
		last--;
	place = 0;
	temp = (char *)malloc((last - first) * (sizeof(char)) + 1);
	if (!temp)
		return (NULL);
	while ((first + place) < last)
	{
		*(temp + place) = *(char *)(s1 + (first + place));
		place ++;
	}
	*(temp + place) = '\0';
	return (temp);
}
