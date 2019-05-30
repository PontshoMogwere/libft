#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	int i;

	i = n % 10;
	if (n > 2147483647 || n < -2147483648)
		return; 
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
		ft_putnbr_fd(n, fd);
	}
	if ( i > 0)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(i + '0', fd);
	}
}
