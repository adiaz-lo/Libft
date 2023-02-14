/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:03:05 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/02/14 13:58:34 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Agrega la string src al final de dst. Agregará como máximo dstsize - 1
* caracteres. Terminará entonces en NULL, salvo que dstsize es 0 o la string
* dst original fuera más larga que dstsize.
* Devuelve el total de la longitud de la string que intenta crear. En este caso
* la longitud inicial de dst más la longitud de src.
*/

size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int		i;
	size_t	srcsize;

	if (dstsize < 1)
		return (ft_strlen(dst) + ft_strlen(src));
	srcsize = ft_strlen(src);
	i = 0;
	while (i < srcsize)
	{
		dst[i] = src[i];
		i++;
	}
	return (srcsize + dstsize);
}
