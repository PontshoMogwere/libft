/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:35:32 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/15 17:45:55 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*c;
	size_t				i;

	i = 0;
	d = (unsigned char *)src;
	c = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (src == dest)
		return (dest = (char *)src);
	if (src < dest)
	{
		while (n-- > 0)
		{
			c[i] = d[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			c[i] = d[i];
			i++;
		}
	}
	return (dest);
}
