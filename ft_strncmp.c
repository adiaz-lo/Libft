/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:27:53 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/03/03 15:30:02 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Compara los primeros size bytes de 2 strings, s1 con s2, devolviendo un valor
 * que tiene el mismo signo que la diferencia entre el primer par diferente de
 * bytes (interpretados como objetos unsigned char, luego promovidos a int).
 */

int	strncmp(const char *s1, const char *s2, size_t size)
{
	unsigned char	cs1;
	unsigned char	cs2;
	int				ics1;
	int				ics2;
	int				i;

	i = 0;
	while (i < size)
	{
		if (!(s1[i] == s2[i]))
	}
	return ();
}
