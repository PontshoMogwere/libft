/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:43:40 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/27 15:24:55 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*d;
	unsigned char	*e;

	i = 0;
	d = (unsigned char *)src;
	e = (unsigned char *)dest;

	while (n-- != 0)
	{
		if (d[i] == (unsigned char)c)
		{
			e[i] = d[i];
			return (e);
		}
		e[i] = d[i];
		i++;
	}
	return (NULL);
}
