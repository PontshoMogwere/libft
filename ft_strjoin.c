/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:08:52 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/09 17:18:25 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	i = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char *) * i)))
		return (NULL);
	if (s1 != NULL || s2 != NULL)
	{
		str = ft_strcpy(str, s1);
		str = ft_strcat(str, s2);
	}
	return (str);
}
