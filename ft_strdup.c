#include "libft.h"

char		*ft_strdup(const char *s)
{
	int i;
	char *c;

	i = 0;
	c = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (c == NULL)
	{
		return NULL;
	}
	while(s[i] != '\0')
	{
		c[i] = s[i];
		i++;
	}
	return (c);
}
