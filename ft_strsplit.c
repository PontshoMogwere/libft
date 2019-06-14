/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:39:19 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/14 16:57:58 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*placestring(char *str, size_t i)
{
	char	*s;

	if (!(s = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	s = ft_strncpy(s, str, i);
	s[i] = '\0';
	return (s);
}

char            **ft_strsplit(char const *s, char c)
{
    size_t      i;
    char        *str;
    char        **strarry;
    char        **arryreturn;

    strarry = (char **)malloc(sizeof(char *) * ft_elementcount((char *)s, c));
    str = NULL;
    arryreturn = strarry;
    if (strarry == NULL || s == NULL)
        return (NULL);
    while(*s)
    {
        if (*s != c)
        {
            i = ft_strlenc((char *)s, c);
            *strarry++ = placestring((char *)s, i);
            while (i-- > 0 && *s != '\0')
                s++;
        }
        else
            s++;
    }
    return (arryreturn);
}
