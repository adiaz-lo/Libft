/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:34:27 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/03/30 09:35:55 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii (int c)
{
	if (c > NULL && c < DEL)
		return (1);
	else
		return (0);
}
