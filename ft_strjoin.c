/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 09:40:10 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/11 10:38:20 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	const size_t	s1l = ft_strlen(s1);
	const size_t	s2l = ft_strlen(s2);

	str = malloc(s1l + s2l + 1);
	if (str)
	{
		memcpy(str, s1, s1l);
		memcpy(str + s1l, s2, s2l);
	}
	else
		return (NULL);
	return (str);
}
