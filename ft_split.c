/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:28:20 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/05/23 14:54:26 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	unsigned int	i;
	int				word_counter;

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

size_t	ft_word_len(char *str, char c)
{
	size_t	word_len;

	word_len = 0;
	while (str[word_len] && str[word_len] != c)
		word_len++;
	return (word_len);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		i;
	size_t	word_len;

	matrix = (char **) malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!matrix || !s)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			word_len = ft_word_len((char *)s, c);
			matrix[i++] = ft_substr((char *)s, 0, word_len);
			s += word_len;
			if (!(matrix[i - 1]))
				return (ft_free_split(matrix));
		}
	}
	matrix[i] = NULL;
	return (matrix);
}

/*int	main(int argc, char **argv)
{
	char	**vuelta;
	int	i;

	i = 0;
	vuelta = ft_split(argv[1], ' ');
	while (i <= ft_count_words(argv[1], ' '))
	{
		printf("Split: %s\n", vuelta[i]);
		i++;
	}
		printf("Word Number: %d\n", ft_count_words(argv[1], ' '));
}
*/
