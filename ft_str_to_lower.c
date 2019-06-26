/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_lower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 13:55:11 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/26 15:50:15 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_str_to_lower(char *s)
{
	char	*g;
	char	*c;

	if (!(g = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)) && !s)
		return (NULL);
	c = g;
	while (*s)
	{
		if (ft_isalpha(*s))
			*g++ = ft_tolower(*s);
		else
			*g++ = *s;
		s++;
	}
	*g = '\0';
	return (c);
}
