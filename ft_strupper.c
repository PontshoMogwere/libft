/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 10:25:55 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/21 10:27:25 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strupper(char *s)
{
    char    *g;
	char	*c;

    if (!(g = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
        return (NULL);
	c = g;
    if (s)
    {
        while (*s)
        {
            *g++ = ft_toupper(*s++);
        }
    }
    *g = '\0';
    return (c);
}
