/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:11:33 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/20 13:28:18 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int i;
	char *d;

	i = 0;
	d = ft_strdup(s);
	while (d[i] != '\0')
	{
		if (d[i] == (char)c)
		{
			return (&d[i]);
		}
		i++;	
	}
	return (NULL);
}
