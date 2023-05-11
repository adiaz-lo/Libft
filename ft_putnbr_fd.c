#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	lnb;

	if (n < 0)
	{
		ntp = n % 10;
		ft_putchar_fd(ntp + '', fd);
		ft_putnbr_fd(n / 10, fd);
	}
}

int	main()
{
	ft_putnbr_fd(42, 1);
	return(0);
}
