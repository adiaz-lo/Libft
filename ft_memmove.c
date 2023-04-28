/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:53:22 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/28 11:35:58 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *to, const void *from, size_t size)
{
	char	*c_from;
	char	*c_to;
	char	*c_temp;
	size_t	i;

	c_from = (char *)from;
	c_to = (char *)to;
	c_temp = malloc(size);
	i = 0;
	while (i < size)
	{
		c_temp[i] = c_from[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		c_to[i] = c_temp[i];
		i++;
	}
	return (to);
}
