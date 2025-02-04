/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 21:02:42 by chrui-ha          #+#    #+#             */
/*   Updated: 2025/01/19 14:59:39 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	words_number(char const *s, char c)
{
	long	i;
	long	count;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			i++;
		else if (*(s + i) != c)
		{
			count ++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
	}
	return (count);
}

static long	word_len(char const *s, char c)
{
	long	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

static void	free_array(long i, char **array)
{
	while (i > 0)
	{
		i--;
		free(*(array + i));
	}
	free(array);
}

static char	**split(char const *s, char c, char **s1, long words)
{
	long	i;
	long	j;

	i = 0;
	j = 0;
	while (i < words)
	{
		while (*(s + j) && *(s + j) == c)
			j++;
		*(s1 + i) = ft_substr(s, j, word_len((s + j), c));
		if (!*(s1 + i))
		{
			free_array(i, s1);
			return (NULL);
		}
		while (*(s + j) && *(s + j) != c)
			j++;
		i++;
	}
	*(s1 + i) = NULL;
	return (s1);
}

char	**ft_split(char const *s, char c)
{
	char	**s1;
	long	words;

	if (!s)
		return (NULL);
	words = words_number(s, c);
	s1 = (char **) malloc((words + 1) * sizeof(char *));
	if (!s1)
		return (NULL);
	s1 = split(s, c, s1, words);
	return (s1);
}

/*
int main (void)
{
	char **tab;
	int i;

	i = 0;
	tab = ft_split("0tripouille", '0');

	printf( "%s",tab[0]);

	return (0);
}
*/
