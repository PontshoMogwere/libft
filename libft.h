#ifndef LIBFT_FILE
#define LIBFT_FILE
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void		ft_bzero(void *s, size_t n);
void		ft_putchar(char c);
void		ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
size_t		ft_strlen(const char *s);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t);




#endif
