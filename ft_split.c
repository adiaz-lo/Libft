/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:28:20 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/21 15:15:19 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

int		count_words(char const *s, char c)
{
	char const	*pcpy;
	int		tnum;

	pcpy = s;
	tnum = 0;
	while (*s != '\0')
	{
		if (*s == c && s != pcpy && *(s - 1) != c)
			tnum++;
		s++;
	}
	if (*(s - 1) != c)
		tnum++;
	return (tnum);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		word_len;
	int		i;
	char	*word_start;
	char	*word_end;

	word_len = count_words(s, c) + 1;
	matrix = malloc(word_len * sizeof(char *));
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		word_start = (char *)s;
		while (*s && *s != c)
			s++;
		word_end = (char *)s;
		word_len = word_end - word_start;
		matrix[i] = ft_substr(word_start, 0, word_len);
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}
