/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:28:20 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/18 18:20:12 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

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
//	char	*token;
	int		istoken;
	
	int		nPalabras = count_words(s, c);
	matrix = malloc(/*count_words(s, c)*/ nPalabras * sizeof(char *));
	return (0);
}
