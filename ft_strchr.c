/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:00:54 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/02/15 16:55:33 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Encuentra la primera aparición del byte c (convertido en un char) en la string
 * que comienza en string. Devuelve el puntero al byte localizado, o un puntero
 * nulo si no se encontró ninguna coincidencia.
*/

char	*ft_strchr(const char *string, int c)
{
	char	cchar;
	int		i;

	cchar = (char)c;
	i = 0;
	while (i < ft_strlen(string))
	{
		if (cchar == string[i])
			return (string);
		i++;
	}
	return (0);
}
