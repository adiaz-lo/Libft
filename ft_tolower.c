/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:03:50 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/02/15 15:08:14 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Si c es una letra mayúscula, devuelve la letra minúscula correspondiente.
 * De lo contrario c se devuelve sin cambios.
*/ 

int	ft_tolower(int c)
{
	if(c > 64 && c < 91)
		return (c + 32);
	return (c);
}
