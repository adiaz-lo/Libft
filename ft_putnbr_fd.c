/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:31:40 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/05/16 16:31:43 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	lnb;

	lnb = n;
	if (lnb < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd(lnb + '0', fd);
	}
	if (lnb <= 9)
		ft_putchar_fd(lnb + '0', fd);
	if (lnb > 9)
	{
		lnb = n % 10;
		ft_putnbr_fd(lnb / 10, fd);
	}
}

int	main()
{
	ft_putnbr_fd(42, 1);
	return(0);
}
