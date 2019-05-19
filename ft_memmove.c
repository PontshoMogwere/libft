#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

void	hangeNum(char *dest)
{
	char *c;

	c = (char *)malloc(sizeof(char));
	dest = c;
	free(c);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char *d;
	char *c;
	int i;

	i = 0;
	d = (char *)src;
	//c = (char *)malloc(n * sizeof(d));
	printf("a");
	//hangeNum((char *)dest);
	//c = (char *)dest;
	//c = (char *)malloc(n * sizeof(d));
	if (n > 0)
	{
		printf("%s", d);
		while (n-- != 0)
		{
			c[i] = d[i];
			i++;
		}
	//	c[i] = '\0';
	}
	return (dest);
}


int main(void)
{
	char d[50]  = "Hello World";
	char *c;
	
	printf("%d", &c);

	//ft_memmove(c, d, 6);
	//printf("%s\n", c);
	return (0);
}
