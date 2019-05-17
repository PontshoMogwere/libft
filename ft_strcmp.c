#include "libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
	{
		return (-2);
	}
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
