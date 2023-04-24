/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:53:22 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/24 16:14:57 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *to, const void *from, size_t size)
{
	char	*cfrom;
	char	*cto;
	char	*temp;
	int		i;

	*cfrom = (char *)from;
	*cto = (char *)to;
	ctemp[size];
	i = 0;
	while (i < size)
	{
		ctemp[i] = cfrom[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		cto[i] = ctemp[i];
		i++;
	}
	return (to);
}
