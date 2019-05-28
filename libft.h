/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:29:33 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/28 13:01:22 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_FILE
# define LIBFT_FILE

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

/*
*typedef 	struct	s_list
*{
*			void	*content;
*			size_t	content_size;
*			struct	s_list	*next;
*}			t_list;
*/
void		ft_bzero(void *s, size_t n);
void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_strcmp(const char *s1, const char *s2);
size_t		ft_strlen(const char *s);
void		*ft_memset(void *str, int c, size_t len);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t);
void		*ft_memmov(void *dest, const void *src, size_t n);
char		*ft_strdup(const char *s);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_isprint(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isascii(int c);
int			ft_isalnum(int c);
int			ft_strncmp(const char * s1, const char *s2, size_t n); 
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strcat(char *restrict s1, const char *restrict s2); 
char		*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t len);
void		ft_putendl(char const *s);
void		*ft_memalloc(size_t size);
int			ft_atoi(const char *str);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
char		*ft_strnew(size_t size);
void		ft_strclr(char *);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_strdel(char **as);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strim(char const *s);
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strmap(char const *s, char (*f)(char *));

#endif
