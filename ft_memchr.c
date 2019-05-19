#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	int i;
	/*variable to hold dest and src pointers*/
	unsigned char *d;

	i = 0;
	d = (unsigned char *)s;
	while(n-- != 0)
	{
		/*checking if the char in d[i] matches the char to stop copy*/
		if (d[i] == (unsigned char)c)
		{
			return (d);
		}
		i++;
	}
	return (NULL);
}
