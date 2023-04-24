/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:36:21 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/24 16:18:29 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		fst;
	int		lst;

	if (!s1 || !set)
		return (0);
	if (*set == '\0')
		return (s1);
	fst = 0;
	while (ft_strchr(set, s1[fst]))
		++fst;
	lst = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[lst]))
		--lst;
	return (ft_substr(s1, fst, lst - fst + 1));
}
