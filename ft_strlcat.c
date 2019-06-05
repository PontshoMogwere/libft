/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:23:50 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/05 15:58:08 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_strlcat(char *restrict dst, const char * restrict src, size_t dstsize)
{
	if (dstsize == 0)
		return (0);
	if (ft_strcmp(dst, "") == 0)
		return (ft_strlen(ft_strcat(dst, src)));
	if (ft_strlen(dst) <= dstsize)
	{
		ft_strncat(dst, src, (dstsize - ft_strlen(dst) - 1));
		return (ft_strlen(dst));
	}
	else
	{
		ft_strncat(dst, src, 0);
		return (ft_strlen(dst));
	}
}
/*
int main()
{
	char *src = "aaa";
	char dst1[20];
	char dst2[20];
	ft_memset(dst2, 'B', sizeof(dst2));
	ft_memset(dst1, 'B', sizeof(dst1));
	printf( "%zu\n", ft_strlcat(dst2, src, 20));
	printf ("%zu\n\n", strlcat(dst1, src, 20));
	printf("%zu\n", ft_strlcat(dst2, src, 20));
	printf("%zu\n\n", strlcat(dst1, src, 20));
	printf("%zu\n", ft_strlcat(dst2, src, 20));
	printf("%zu\n\n", strlcat(dst1, src, 20));
	printf("%zu", ft_strlen(dst2));
	return (0);
}*/
/*
int main()
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	size_t r1 = strlcat(buff1, str, max);
 	size_t r2 = ft_strlcat(buff2, str, max);	

	printf("r1b %zu\n", r1);
	printf("r2b %zu\n\n", r2);
	char s1[4] = "";
	char s2[4] = "";

	r1 = strlcat(s1, "thx to ntoniolo for this test !", 4);
	r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
	printf("r1a %zu\n", r1);
	printf("r2a %zu\n\n", r2);
	return (0);
}*/
