/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:00:54 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/28 11:48:13 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	char	c_char;

	c_char = (char)c;
	while (ft_strlen(string) - 1)
	{
		if (c_char == *string)
			return ((char *) string);
	}
	return (0);
}
