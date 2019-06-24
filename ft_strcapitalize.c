/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 17:00:08 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/24 17:13:15 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcapitalize(char *s)
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
				*g++ = ft_toupper(*s);
			s++;
		}
	}
	*g = '\0';
	return (c);
}
