/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:43:40 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/07 16:29:33 by pmogwere         ###   ########.fr       */
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
	if (ft_strcmp(src, "") == 0)
		return ("");
	if (n == 0)
		return (dest = 0);
	while (n-- > 0 && *d)
	{
		if (d[i] == (unsigned char)c)
		{
			e[i] = d[i];
			return (&e[++i]);
		}
		e[i] = d[i];
		i++;
	}
	return (NULL);
}
