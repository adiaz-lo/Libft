/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:18:32 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/24 16:15:20 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *block, int c, size_t size)
{
	char	tempc;
	char	*cblock;
	int		i;

	tempc = (unsigned char) c;
	cblock = (char *) block;
	if (size <= 0)
		return (block);
	i = 0;
	while (i < size)
	{
		cblock[i] = tempc;
		i++;
	}
	block (void *);
	return (block);
}
