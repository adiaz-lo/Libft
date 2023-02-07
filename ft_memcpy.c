/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:25:17 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/02/07 12:36:25 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copia size bytes desde from a to. Devuelve el valor de to.*/

void	*memcpy(void *restrict to, const void *restrict from, size_t size)
{
	char	*cfrom;
	char	*cto;
	int		i;

	i = 0;
	while (i < size)
	{
		cto[i] = cfrom[i];
		i++;
	}
	return (to);
}
