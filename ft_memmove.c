/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:35:32 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/04 13:49:55 by pmogwere         ###   ########.fr       */
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
	if (n == 0 || (d == NULL && c == NULL))
		return (NULL);
	if (ft_strcmp((char *)d, " ") == 0 && ft_strcmp((char *)c, " ") == 0)
		return (dest);
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
