/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:44:42 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/20 13:44:47 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char *d;
	unsigned char *c;

	i = 0;
	d = (unsigned char *)src;
	c = (unsigned char *)dest;
	while(n != 0)
	{
		c[i] = d[i];
		i++;
		n--;
	}
	return (dest);
}
