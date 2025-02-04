/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:04:47 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/06/30 13:01:03 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	long	nbr;
	int		isneg;

	i = 0;
	nbr = 0;
	isneg = 0;
	while (str[i] != '\0' && (str[i] == 32 || (str[i] > 8 && str[i] < 14)))
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		isneg = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && ft_isdigit(str[i]))
		nbr = (nbr * 10) + (str[i++] - '0');
	if (isneg == 1)
		return (-nbr);
	return (nbr);
}
/*
int main(void)
{
	printf("%d",ft_atoi("0"));
	printf("\n%d",ft_atoi("+42lyon"));
	printf("\n%d",ft_atoi("+101"));
	printf("\n%d",ft_atoi("2147483647"));
	printf("\n%d",ft_atoi("12-23"));
	printf("\n%d",ft_atoi("12+23"));
	printf("\n%d",ft_atoi("--1"));
	printf("\n%d",ft_atoi("++1"));
	printf("\n%d",ft_atoi("-+42"));
	printf("\n%d",ft_atoi("+-42s"));
	return (0);
}
*/
