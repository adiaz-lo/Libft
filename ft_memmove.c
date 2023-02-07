/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:53:22 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/02/07 12:17:06 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**/

void	*memmove(void *to, const void *from, size_t size)
{
	char	*cfrom;
	char	*cto;
	char	*temp;
	int		i;

	*cfrom = (char *)from;
	*cto = (char *)to;
	ctemp[size];
	i = 0;
	while (i < size)
	{
		ctemp[i] = cfrom[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		cto[i] = ctemp[i];
		i++;
	}
	return (to);
}
