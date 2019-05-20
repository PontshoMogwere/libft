#include "libft.h"
#include <stdio.h>

char		*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	if (needle == NULL)
	{
		return (*haystack);
	}
	while(haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			ret = ft_strcmp(&haystack[i], needle);
			if (ret == 0)
			{
				return ((haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}

int main () {
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;

   ret = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);

   return(0);
}
