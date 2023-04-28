/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:25:17 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/28 11:20:35 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t size)
{
	char	*to_c;
	char	*from_c;

	to_c = (char *) to;
	from_c = (char *) from;
	while (size--)
		*to_c++ = *from_c++;
	return (to_c);
}
