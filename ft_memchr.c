/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:11:14 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/25 12:59:15 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	char			*str;
	unsigned char	ucs;

	str = (char *)s;
	ucs = (unsigned char)c;
	while (size-- && *str++)
		if (ucs == *str)
			return (str);
	return (0);
}
