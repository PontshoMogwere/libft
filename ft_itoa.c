#include "libft.h"
#include <stdio.h>
static char *lmin(int n)
{
	char *s;

	if (!(s = (char *)malloc(sizeof(char) * 20)))
		return NULL;
	if (n == (-2147483647 -1))
		return (s = ft_strcpy(s, "-2147483648"));
	if (n == 2147483647)
		return (s = ft_strcpy(s, "2147483647"));
	return (s);
}

static int	countint(int n)
{
	int count;

	count = 1;
	if (n < 0)
		count++;
	if (n == 0)
		return (count);
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	int i;
	char *c;
	char *str;
	
	i = n % 10;
	c = (char *)malloc(sizeof(char) * 2);
	if ((!(str = (char *)malloc(sizeof(char) * countint(n)))) || c == NULL)
			return (NULL);
	if ((n == (-2147483647 -1)) || (n >= 2147483647 || n < (-2147483647 -1)))
		return (str = lmin(n));
	if (n == 0)
		return (str = "0");
	if (i < 0)
	{
		str[0] = '-';
		n *= -1;
		ft_itoa(n);
	}
	if (i >= 0 && n != 0)
	{
		str = ft_itoa(n / 10);;
		*c++ = i + '0';
		*c = '\0';
		str = ft_strcat(str, c);
		printf("%s\n", c);
	}
	return (str);
}

int main()
{
	int size;
	char *i1;

	i1 = ft_itoa(-50859);
	printf("\n\n%s", i1);
	return (0);
}
