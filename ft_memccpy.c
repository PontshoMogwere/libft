#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int i;
	unsigned char *d;
	unsigned char *e;

	i = 0;
	d = (unsigned char *)src;
	e = (unsigned char *)dest;
	while(n != 0 && d[i] != '\0')
	{
		if ((int)d[i] == (int)c)
		{
			return (e);
		}
		e[i] = d[i];
		i++;
		n--;
	}
	return (NULL);
}
