/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:23:50 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/04 17:35:33 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *restrict dst, const char * restrict src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (dstsize == 0)
		return (0);
	if (ft_strcmp(dst, "") == 0)
		i = ft_strlen(ft_strncat(dst, src, dstsize - ft_strlen(src) - 1));
		return (i);
	i = ft_strlen(ft_strncat(dst, src, (dstsize - ft_strlen(src) - 1)));
	if ( i >= dstsize)
		//return (ft_strlen(ft_strcat(dst, src)));
		return (i);
	return (dstsize + ft_strlen(src) - 1);
}
