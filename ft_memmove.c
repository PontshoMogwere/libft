/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:35:32 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/07 16:42:23 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*c;
	int				i;

	i = 0;
	d = (unsigned char *)src;
	c = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n-- > 0)
	{
			c[i] = d[i];
			i++;
	}
	c[i] = '\0';

	return (dest);
}
