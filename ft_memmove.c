/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:35:32 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/05 14:16:41 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	if (dest >= src && n > 0)
	{
		while (n-- > 0)
		{
			c[i] = d[i];
			i++;
		}
		c[i] = '\0';
		return (dest);
	}

	return (dest);
}

int main()
{
	char dst2[0xF0];
	char *data = "thiÃ<9f> Ã<9f>\xde\xad\xbe\xeftriÃ±g will be Ã¸vÃ©rlapÃ©d !\r\n";
	ft_memcpy(dst2, data, ft_strlen(data));
	int size = 0xF0 - 0xF;
	ft_memmove(dst2, dst2 + 3, size);
	return (0);
}
