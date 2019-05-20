/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:29:33 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/20 13:29:47 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_FILE
#define LIBFT_FILE
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void		ft_bzero(void *s, size_t n);
void		ft_putchar(char c);
void		ft_putstr(char *str);
int		ft_strcmp(const char *s1, const char *s2);
size_t		ft_strlen(const char *s);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t);
char		*ft_strdup(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isprint(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_strncmp(const char * s1, const char *s2, size_t n); 
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strchr(const char *s, int c);
#endif
