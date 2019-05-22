#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *c;
	int i;

	i = 0;
	d = (unsigned char *)src;
	c = (unsigned char *)dst;
	if (dest > src)
	{
		while (n-- != 0)
		{
			c += n;
			c[i] = d[i];
			i++;
		}
	}
	return (dest);
}
