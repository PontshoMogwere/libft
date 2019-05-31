/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:35:32 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/31 10:19:13 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*c;
	int				i;
	int				len;

	i = 0;
	len = ft_strlen(src);
	d = (unsigned char *)src;
	c = (unsigned char *)dest;
	if (n == 0 && (d && c == NULL))
		return (NULL);
	if (dest >= src)
	{
		while (n-- > 0 && *d)
		{
			c[i] = d[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0 && *d)
			c[len++] = d[i++];
	}
	return (dest);
}
