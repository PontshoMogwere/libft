/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:41:11 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/29 16:57:42 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		ret;
	char	*c;

	i = 0;
	ret = 0;
	c = (char *)haystack;
	if (needle == NULL && haystack == NULL)
		return ("");
	if (ft_strcmp(needle, "") == 0)
		return ((char *)haystack);
	while (c[i] != '\0')
	{
		if (c[i] == needle[0])
		{
			ret = ft_strncmp(&c[i], needle, len - 1);
			if (ret == 0)
			{
				return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
