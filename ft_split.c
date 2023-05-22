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

int	ft_count_words(char const *s, char c)
{
	unsigned int	i;
	int		word_counter;

	i = 0;
	word_counter = 0;
	if (s == 0 || s[i] == '\0')
		return (0);
	if (s[0] != c)
		word_counter = 1;
	while (s[i] != '\0')
	{
		if (s[i + 1] != c && s[i + 1] != '\0' && s[i] == c)
			word_counter++;
		i++;
	}
	return (word_counter);
}

static	char	**ft_free_split(char **matrix)
{
	int		i;

	i = 0;
	while (matrix[i])
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

	matrix = (char **) malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!matrix || !s)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if(*s)
		{
			word_start = (char *)s;
			while (*s && *s != c)
				s++;
			word_end = (char *)s;
			matrix[i++] = ft_substr(word_start, 0, word_end - word_start);
			if (!(matrix[i - 1]))
				return (ft_free_split(matrix));
		}
	}
	matrix[i] = NULL;
	return (matrix);
}
