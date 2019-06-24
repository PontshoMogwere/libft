/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 17:15:06 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/24 17:20:47 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strlowcase(char *s)
{
	char	*g;
	char	*c;

	if (!(g = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	c = g;
	if (s)
	{
		while (*s)
		{
			if (ft_isalpha(*s))
				*g++ = ft_tolower(*s);
			s++;
		}
	}
	*g = '\0';
	return (c);
}
