/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:23:50 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/24 10:28:36 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *restrict dst, const char * restrict src, size_t dstsize)
{
	if (ft_strlen(ft_strcat(dst, src)) == dstsize)
		return (ft_strlen(ft_strcat(dst, src)));
	return (ft_strlen(src));
}
