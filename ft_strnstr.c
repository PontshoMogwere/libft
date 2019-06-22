/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:41:11 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/22 13:54:57 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(char *haystack, const char *needle, size_t len)
{
	int		i;
	int		ret;
	char	*c;

	i = 0;
	ret = 0;
	c = (char *)haystack;
	if ((needle == NULL && haystack == NULL))
		return (NULL);
	if (ft_strcmp(needle, "") == 0)
		return (haystack);
	while (len-- > 0)
	{
		if (ft_strlen((const char *)needle) > ft_strlen((const char *)&c[i]))
			return (NULL);
		if (c[i] == (char)needle[0] && ft_strlen(needle) <= len)
		{
			ret = ft_strncmp(&c[i], needle, ft_strlen(needle));
			if (ret == 0)
				return ((char *)&c[i]);
		}
		i++;
	}
	return (NULL);
}
