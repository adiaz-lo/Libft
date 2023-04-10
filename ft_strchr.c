/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:00:54 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/10 17:20:09 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *string, int c)
{
	char	cchar;
	int		i;

	cchar = (char)c;
	i = 0;
	while (i < ft_strlen(string))
	{
		if (cchar == string[i])
			return (string);
		i++;
	}
	return (0);
}

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
