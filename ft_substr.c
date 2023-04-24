/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 09:25:20 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/24 16:18:45 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const size_t	sl = ft_strlen(s);
	const size_t	slfs = sl - start;
	char			*str;

	if (!s)
		return (0);
	if (len == 0 || start >= sl)
		return (ft_calloc(1, 1));
	if (slfs <= len)
		str = malloc(slfs + 1);
	else
		str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, len + 1);
	return (str);
}
