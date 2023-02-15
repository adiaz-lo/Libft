/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:57:29 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/02/15 17:25:20 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Encuentra la primera aparición del byte c (convertido en un char) en la string
 * que comienza en string desde el final al inicio empezando por el final de la
 * misma. Devuelve el puntero al byte localizado, o un puntero nulo si no se
 * encontró ninguna coincidencia.
 */

char	*strrchr(const char *string, int c)
{
	char	cchar;
	int		i;

	cchar = (char)c;
	i = 0;
	while (ft_strlen(string) > i)
	{
		if (cchar == string[ft_strlen(string) - i])
			return (string);
		i++;
	}
	return (0);
}
