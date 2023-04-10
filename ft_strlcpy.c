/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:48:54 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/10 17:21:00 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return (ft_strlen(src));
}
