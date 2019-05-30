#include "libft.h"

void		ft_putnbr(int n)
{
	int i;

	i = n % 10;
	if (n > 2147483647 || n < -2147483647)
		return; 
	if (i < 0)
	{
		ft_putchar('-');
		n *= -1;
		ft_putnbr(n);
	}
	if ( i > 0)
	{
		ft_putnbr(n / 10);
		ft_putchar(i + '0');
	}
}
