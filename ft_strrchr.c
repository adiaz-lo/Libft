/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:57:29 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/03/30 12:29:10 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *string, int c)
{
	char	cchar;
	int		i;

	cchar = (char)c;
	i = 0;
	while (ft_strlen(string) > i)
	{
		if (cchar == string[ft_strlen(string) - i])
			return (string);
		i++;
	}
	return (0);
}
