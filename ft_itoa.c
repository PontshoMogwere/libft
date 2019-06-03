#include "libft.h"
#include <stdio.h>

static char *lmin(void)
{
	char *s;

	s = (char *)malloc(sizeof(char) * 20);
	s = ft_strcpy(s, "-2147483648");
	return (s);
}

char		*ft_itoa(int n)
{
	int i;
	int c;
	char *str;

	i = n % 10;
	c = 0;
	if (!(str = (char *)malloc(sizeof(char) * 20)))
			return (NULL);
	if (n < -2147483648)
		printf("a");
		str = lmin();
	if (n == 0)
		str[c++] = '0';
	if (i < 0)
	{
		str[c++] = '-';
		n *= -1;
		ft_itoa(n);
	}
	if (i >= 0 && n / n  != 0)
	{
		ft_itoa(n / 10);
		str[c++] = i + '0';
	}
	str[c] = '\0';
	return (str);
}
