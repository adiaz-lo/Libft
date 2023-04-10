/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:54:13 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/10 12:27:15 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t eltsize)
{
	void	*value;

	value = malloc(count);
	if (value)
		ft_memset(value, 0, count * eltsize);
	else
		return (NULL);
	return (value);
}
