/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:41:43 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/23 11:37:55 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		ret;
	char	*c;

	i = 0;
	ret = 0;
	c = ft_strdup(haystack);
	if (needle == NULL)
	{
		return (c);
	}
	while (c[i] != '\0')
	{
		if (c[i] == needle[0])
		{
			ret = ft_strcmp(&c[i], needle);
			if (ret == 0)
			{
				return (&c[i]);
			}
		}
		i++;
	}
	return (NULL);
}
