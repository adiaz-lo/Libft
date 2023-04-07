/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:28:24 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/07 11:25:53 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace (int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' ||
			c == ' ')
			return (1);
	else
		return (0);
}

int ft_atoi (const char *string)
{
	char	*strc;
	int		sign;

	strc = (char *)string;
	while (*strc == ft_isspace(*strc))
		strc++;
	if ()
	return (ft_isspace(string[0]));
}

int	main()
{
	return (234/*ft_atoi("a")*/);
}
