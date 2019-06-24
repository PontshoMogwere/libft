/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 14:47:12 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/24 15:33:28 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				**ft_strsplit(char const *s, char c)
{
	size_t			i;
	unsigned int	j;
	size_t			l;
	char			**strarry;

	if (!s)
		return (0);
	i = ft_elementcount((char *)s, c);
	j = 0;
	l = 0;
	if (!(strarry = (char **)malloc(sizeof(char *) * i + 1)))
		return (0);
	i = 0;
	while (s[j] != '\0' && j < ft_strlen(s))
	{
		if (s[j] != c)
		{
			l = ft_strlenc((char *)&s[j], c);
			strarry[i++] = ft_strdup(ft_strsub(s, j, l));
			j = j + l;
		}
		else
			j++;
	}
	return (strarry);
}
