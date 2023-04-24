/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:28:24 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/24 16:11:04 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || \
		c == ' ')
		return (1);
	else
		return (0);
}

/*int	ft_atoi(const char *string)
{
	char	*strc;
	int		sign;
	int		number;

	strc = (char *)string;
	while (*strc == ft_isspace(*strc))
		strc++;
	if (*strc == '-')
	{
		sign = -1;
		strc++;
	}
	else if (*strc == '+')
	{
		sign = 1;
		strc++;
	}
	number = 0;
	while (ft_isdigit(*strc++))
	{
		number = 10 * number + (*strc - '0');
	}
	return (ft_isspace(string[0]));
}*/

int	ft_atoi(const char *string)
{
	int		sign;
	int		number;

	while (*string == ft_isspace(*string))
		string++;
	if (*string == '-')
	{
		sign = -1;
		string++;
	}
	else if (*string == '+')
	{
		sign = 1;
		string++;
	}
	number = 0;
	while (ft_isdigit(*string++))
	{
		number = 10 * number + (*string - '0');
	}
	return (sign * number);
}
