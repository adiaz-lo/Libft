/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 09:25:20 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/11 16:00:19 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	const size_t	sl = ft_strlen(s);
	const size_t	strlfmsta = sl - start; //str length from start
	char			*str;

	if (!(strlfmsta))
		return ();
	if (sl - start < len)
		malloc(strllfmsta + 1)
		
	return (str);
}
