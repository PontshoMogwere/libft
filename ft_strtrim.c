/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:26:50 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/28 15:46:19 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int 	chckwhp(char *str)
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
	str = (char *)malloc(sizeof(char) * sizeof(s));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		else
		{
			while (s[i] != '\0')
				if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
				{
					if (chckwhp((char *)&s) == 0)
						break;
				}
				str[j++] = s[i++];
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
