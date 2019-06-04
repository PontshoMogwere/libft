/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:44:03 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/04 13:55:38 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)s;
	while (n-- > 0 && *d)
	{
		if (d[i] == (unsigned char)c)
		{
			return (&d[i]);
		}
		i++;
	}
	return (NULL);
}
