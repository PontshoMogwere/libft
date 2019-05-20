#include "libft.h"
#include <stdio.h>

char		*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int ret;
	char *c;

	i = 0;
	ret = 0;
	//c = (char *)malloc(sizeof(char) * ft_atrlen(haystack));
	c = ft_strdup(haystack);
	if (needle == NULL)
	{
		return (haystack);
	}
	while(c[i] != '\0')
	{
		if (c[i] == needle[0])
		{
			ret = ft_strcmp(c[i], needle);
			if (ret == 0)
			{
				return (c);
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
