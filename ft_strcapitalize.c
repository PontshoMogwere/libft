/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 14:56:55 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/26 15:56:23 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcapitalize(char *s)
{
	char	*g;
	char	*c;

	if (!(g = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)) && !s)
		return (0);
	c = g;
	while (*s != 0)
	{
		if (ft_isspace(*s) == 1)
			*g++ = *s++;
		else
		{
			*g++ = ft_toupper(*s);
			s += ft_wordlen(s);
		}
	}
	*g = 0;
	return (c);
}
