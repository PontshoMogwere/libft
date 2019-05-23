/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:46:18 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/23 11:23:49 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	int		i;
	char	*c;

	i = 0;
	c = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (c == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		c[i] = s[i];
		i++;
	}
	return (c);
}
