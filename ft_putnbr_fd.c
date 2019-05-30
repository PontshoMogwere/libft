#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	int i;

	i = n % 10;
	if (n > 2147483647 || n < -2147483647)
		return; 
	if (i < 0)
	{
		ft_putchar('-');
		n *= -1;
		ft_putnbr(n, fd);
	}
	if ( i > 0)
	{
		ft_putnbr_fd(n / 10);
		ft_putchar_fd(i + '0', fd);
	}
}
