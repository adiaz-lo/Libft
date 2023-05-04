/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:08:34 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/25 16:19:01 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		n /= 10;
		++len;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*string;
	size_t	len;

	len = ft_intlen(n);
	string = malloc (len);
	if (!string)
		return (NULL);
	if (n < 0)
	{
		string[0] = '0';
		n = -n;
	}	
	while (n)
	{
		string[--len] = n % 10;
		n /= 10;
	}
	return (string);
}
