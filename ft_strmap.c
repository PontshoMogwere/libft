/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:14:43 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/09 15:45:56 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	if (s != NULL || f != NULL)
	{
		while (s[i] != '\0')
		{
			str[i] = f((char)s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
