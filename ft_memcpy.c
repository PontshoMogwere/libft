#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char *d;
	unsigned char *c;

	i = 0;
	d = (unsigned char *)src;
	c = (unsigned char *)dest;
	while(n != 0)
	{
		c[i] = d[i];
		i++;
		n--;
	}
	return (dest);
}
