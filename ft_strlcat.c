/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:23:50 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/22 16:06:06 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lendst;
	size_t	holdst;

	i = 0;
	j = 0;
	lendst = ft_strlen(dst);
	holdst = lendst + ft_strlen(src);
	if (size == 0)
		return (ft_strlen(src));
	if (lendst >= size)
		return (ft_strlen(src) + size);
	while (lendst < size - 1)
		dst[lendst++] = src[i++];
	dst[lendst] = '\0';
	return (holdst);
}
