/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:34:27 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/01/27 09:53:46 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Devuelve true si c es un valor unsigned char de 7 bits perteneciente al
 * conjunto de caracteres ASCII de UK y US*/

int ft_isascii (int c)
{
	if (c > NULL && c < DEL)
		return (1);
	else
		return (0);
}
