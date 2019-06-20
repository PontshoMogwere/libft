#include "libft.h"
#include <stdio.h>
char    *ft_strupper(char *s)
{
    char    *g;

    if (!(g = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
        return ("");
    if (s)
    {
        while (*s)
        {
            *g++ = ft_toupper(*s++);
            ft_putchar(g[0]);
        }
    }
    *g = '\0';
    return (g);
}

int main(void)
{
    char *s = "Hello World";
    printf("%s", ft_strupper(s));
    return (0);
}