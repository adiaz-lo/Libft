/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:03:05 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/05/01 11:00:44 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_size;

	if (dstsize < 1)
		return (ft_strlen(dst) + ft_strlen(src));
	src_size = ft_strlen(src);
	i = 0;
	while (i < src_size)
	{
		dst[i] = src[i];
		i++;
	}
	return (src_size + dstsize);
}
