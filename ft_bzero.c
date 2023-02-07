/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:14:01 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/02/07 13:29:59 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Establece a NULL/0 en cada uno de los primeros size bytes del objeto que
 * comienza en block. Devuelve el valor de block.*/

/*void	ft_bzero(void *block, size_t size)
{
	char	*cblock;
	int		i;

	cblock = (char *)block;
	i = 0;
	while (i < size)
	{
		cblock[i] = 0;
		i++;
	}
}*/

void	ft_bzero(void *block, size_t size)
{
	ft_memset(block, 0, size);
}
