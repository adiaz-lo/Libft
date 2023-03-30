/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:11:14 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/03/30 09:37:27 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t size)
{
	unsigned char	ucs;

	ucs = (unsigned char)c;
	while (size-- && *s++)
		if (ucs == *s)
			return (s);
	return (0);
}
