/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:58:54 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/02/15 15:03:34 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Si c es una letra minúscula, devuelve la letra mayúscula correspondiente.
 * De lo contrario c se devuelve sin cambios.
*/

int	ft_toupper(int c)
{
	if(c > 96 && c < 123)
		return (c - 32);
	return (c);
}
