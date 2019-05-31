/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:26:50 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/31 15:14:50 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int 	chckwsp(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if(!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char));
	if (str == NULL || s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		else
		{
			while (s[i] != '\0')
			{
				if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
				{
					if (chckwsp((char *)&s[i]) == 0)
						break;
					str[j++] = s[i++];
				}
				else
					str[j++] = s[i++];
			}
		}
	}
	ft_memset(&str[j], '\0', (ft_strlen(s)));
	return (str);
}
