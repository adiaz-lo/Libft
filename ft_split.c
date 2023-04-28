/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:28:20 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/28 10:46:22 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count_words(char const *s, char c)
{
	char const	*pcpy;
	int			tnum;

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

static	char	**ft_free_split(char **matrix)
{
	int		i;

	i = 0;
	while (*matrix)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		i;
	char	*word_start;
	char	*word_end;

	matrix = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		word_start = (char *)s;
		while (*s && *s != c)
			s++;
		word_end = (char *)s;
		matrix[i++] = ft_substr(word_start, 0, word_end - word_start);
		if (!(matrix[i - 1]))
			return (ft_free_split(matrix));
	}
	matrix[i] = NULL;
	return (matrix);
}
