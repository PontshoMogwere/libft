/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:43:40 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/20 13:43:45 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int i;
	/*variables to hold dest and src pointers*/
	unsigned char *d;
	unsigned char *e;

	i = 0;
	d = (unsigned char *)src;
	e = (unsigned char *)dest;
	while(n != 0)
	{
		/*checking if the char in d[i] matches the char to stop copy*/
		if (d[i] == (unsigned char)c)
		{
			return (e);
		}
		e[i] = d[i];
		i++;
		n--;
	}
	return (NULL);
}
