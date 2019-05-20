/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:41:11 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/20 11:20:29 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int ret;
	char *c;

	i = 0;
	ret = 0;
	c = ft_strdup(haystack);
	if(needle == NULL)
	{
		return (c);
	}
	while(c[i] != '\0')
	{
		if (c[i] == needle[0])
		{
			ret = ft_strncmp(&c[i], needle, len);
			if (ret == 0)
			{
				return (&c[i]);
			}
		}
		i++;
	}
	return (NULL);
}
