#include "libft.h"

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

	count = 0;
	if (n < 0)
		count++;
	if (n == 0)
		return (++count);
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
	int j;
	char *str;
	
	i = countint(n);
	j = 0;
	if (!(str = (char *)malloc(sizeof(char) * countint(n) + 1)))
			return (NULL);
	if ((n == (-2147483647 -1)) || (n >= 2147483647 || n < (-2147483647 -1)))
		return (str = lmin(n));
	str[i--] = '\0';
	if (n < 0)
	{
		n *= -1;
		j = -1;
	}
	if (n == 0)
		return (str = ft_strcpy(str, "0"));
	while (i >= 0)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
		if (j < 0)
			str[0] = '-';
	}
	return (str);
}
