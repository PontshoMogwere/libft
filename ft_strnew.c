/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 07:04:12 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/27 16:42:17 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char *s;

	s = (char *)malloc(sizeof(char *) * size);
	if (s == NULL)
		return (NULL);
	ft_memset(s, '\0', size);
	return (s);
}
