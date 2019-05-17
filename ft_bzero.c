#include "libft.h"
void		ft_bzero(void *s, size_t n)
{
	unsigned char *str;
	int	i;

	i = 0;
	str = (unsigned char *)s;
	if (n != 0)
	{
		while (n-- > 0)
		{
			str[i++] = '\0';
		}
	}
}
