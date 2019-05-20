#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= '\t' && c <= '\r')
	{
		return (1);
	}
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	return (0);

}
