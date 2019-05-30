#include "libft.h"
#include <stdio.h>


char		*ft_itoa(int n)
{
	int i;
	int c;
	char *str;

	i = n % 10;
	c = 0;
	str = (char *)malloc(sizeof(char) * 10);
	if (i < 0)
	{
		c = 1;
		n *= -1;
	}
	while (i > 0)
	{
		str[c] = i + '0';
		i = n % 10;
		c++;
	}
	str[c] = '\0'; 
	return (str);

}

int main()
{
	char *s;

	s = ft_itoa(345);
	printf("%s", s);
	return (0);
}
