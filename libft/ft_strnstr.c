/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:16:40 by chrui-ha          #+#    #+#             */
/*   Updated: 2025/01/09 12:09:02 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	j;

	if (!haystack && !len)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len--)
	{
		j = 0;
		while (*(haystack + j) == *(needle + j)
			&& *(needle + j) && j <= len)
		{
			if (!*(needle + j + 1))
				return ((char *)haystack);
			j++;
		}
		haystack++;
	}
	return (NULL);
}
/*
int main (void)
{
			char	*i1 = strnstr(NULL, "fake", 0);
			char	*i2 = ft_strnstr(NULL, "fake", 0);
			char haystack[30] = "aaabcabcd";
	        char needle[10] = "aabc";
		

			printf("%s",i1);
			printf("\n%s",i2);
			printf("\n%s",ft_strnstr(haystack, needle, -1));
			printf("\n%s",ft_strnstr(haystack, "aaabc", 5));
			printf("\n%s",ft_strnstr(haystack, "abcd", 9));
			printf("\n%s",ft_strnstr(haystack, "a", 1));

	return (0);
}
*/
