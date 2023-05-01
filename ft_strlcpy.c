/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:48:54 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/05/01 11:01:28 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize < 1)
		return (0);
	i = 0;
	while (i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[dstsize] = 0;
	return (ft_strlen(src));
}
