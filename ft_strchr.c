/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:00:54 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/25 14:41:07 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	char	cchar;

	cchar = (char)c;
	while (ft_strlen(string)--)
	{
		if (cchar == *string)
			return (string);
	}
	return (0);
}
