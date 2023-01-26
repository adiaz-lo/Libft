# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 12:52:56 by adiaz-lo          #+#    #+#              #
/*   Updated: 2023/01/26 13:42:18 by adiaz-lo         ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

int	ft_isupper (int c)
{
	if (c < 'A' || c > 'Z')
	{
		return (1);
	}
	else
		return (0);
}

int	ft_islower (int c)
{
	if (c < 'a' || c > 'z')
	{
		return (1);
	}
	else
		return (0);
}

int	ft_isalpha (int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	else
		return (0);
}
