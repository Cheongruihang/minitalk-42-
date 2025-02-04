/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:06:25 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/06/20 16:46:57 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	char	*temp_ptr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	temp = (char *)malloc ((len * sizeof(char)) + 1);
	if (!temp)
		return (NULL);
	s += start;
	temp_ptr = temp;
	*(temp + len) = '\0';
	while (len-- && *s)
		*temp++ = *s++;
	return (temp_ptr);
}
/*
int main (void)
{
    char	*str = "i just want this part #############";
	size_t	size = 22;

	char	*ret = ft_substr(str, 0, size);
    printf("%s",ret);
    return (0);
}
*/
