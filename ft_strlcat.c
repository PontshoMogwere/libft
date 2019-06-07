/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:23:50 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/07 18:23:14 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_strlcat(char *restrict dst, const char * restrict src, size_t dstsize)
{
	if (dstsize == 0)
		return (0);
	if (ft_strcmp(dst, "") == 0)
		return (dstsize);
	if (ft_strlen(dst) + ft_strlen(src) <= dstsize)
	{
		ft_strncat(dst, src, ft_strlen(src) - 1);
		return (ft_strlen(dst) + ft_strlen(src));
	}
	else
	{
		//ft_strncat(dst, src, 0);
		return (ft_strlen(dst) + ft_strlen(src));
	}
}
/*
int main()
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	size_t r2 = ft_strlcat(buff2, "", max);
	size_t r1 = strlcat(buff1, "", max);

	printf("%zu\n", r2);
	printf("\n%zu\n", r1);
	printf("%s\n\n", buff1);
//	printf("%zu\n", ft_strlen(buff1));
	printf("%s\n", buff2);
	return (0);
}*/
