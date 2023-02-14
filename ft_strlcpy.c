/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:48:54 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/02/14 12:08:36 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copia caracteres hasta dstsize -1 del string src a dst, terminando el
 * resultado en 0/NULL si dstsize no es 0.
*/

size_t	ft_strlcpy(char *restrict dst, const char restrict *src, size_t dstsize)
{
	int	i;

	if (dstsize < 1)
		return (0);
	i = 0;
	while (i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[dstsize] = 0;
	return ft_strlen(src);
}
