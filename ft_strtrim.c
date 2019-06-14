/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:26:50 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/14 16:30:26 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*rmwhitespace(char *str)
{
	char	*s;

	s = NULL;
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		else
			return (s = str);
	}
	return (str);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	char	*str2;

	if (!s)
		return (NULL);
	str = rmwhitespace((char *)s);
	str2 = ft_strrev(str);
	str = rmwhitespace(str2);
	str2 = ft_strrev(str);
	return (str2);
}
