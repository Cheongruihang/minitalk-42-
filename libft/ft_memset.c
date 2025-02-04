/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:28:08 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/07/03 09:29:33 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char			*point;

	point = (unsigned char *) b;
	while (len--)
		*point++ = (unsigned char)c;
	return (b);
}
/*
int main (void)
{
    char b [5];
    char c [5];
    ft_memset(b, 5, sizeof(b));
    for (unsigned long i = 0; i < sizeof(b); i++){
        printf("%i", b[i]);
    }
    printf("\n");
    memset(c, 5, sizeof(c));
    for (unsigned long j = 0; j < sizeof(c); j++){
        printf("%i", c[j]);
    }
    return(0);
}
*/
