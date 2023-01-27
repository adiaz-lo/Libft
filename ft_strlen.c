/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:06:48 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/01/27 10:17:50 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Devuelve la longitud de la string s en bytes (o dicho de otro modo, devuelve
 * el desplazamiento del byte nulo terminante dentro del array*/

size_t ft_strlen (const char *s)
{
	size_t length;

	length = 0;
	while (*s++)
		length++;
	return (length);
}
