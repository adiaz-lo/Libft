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
	if (len == 0)
	{
		string = malloc (len);
		string[0] = 0;
		string[1] = '\0';
	}
	while (n > 0)

	return(0);
}
