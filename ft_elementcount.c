/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_elementcount.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:11:18 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/14 12:33:02 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    	ft_elementcount(char *s, char c)
{
    size_t	count;
    size_t	result;

    count = 0;
    result = 0;
	if (s == NULL)
		return (0);
    while (*s)
    {
        if (*s != c)
        {
            while (*s++ != c)
                count++;
            result += count / count;
        }
		s++;
    }
    return (result);
}
