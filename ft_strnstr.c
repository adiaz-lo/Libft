/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 10:17:22 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/03/27 18:01:14 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*fst;

	fst = haystack;
	while (fst++ && needle++ && len--)
	{
		printf("%c", *haystack);
		if (*fst == *needle)
			return (fst);
	}
	return ("Error");
}

int main()
{
	char	*cadena;
	cadena = strnstr("Hola", "la", 4);
	printf("%s", cadena);
	return (0);
}
