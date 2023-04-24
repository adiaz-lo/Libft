/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:03:05 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/24 16:16:41 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
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
