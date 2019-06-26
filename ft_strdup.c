/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:46:18 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/26 13:46:41 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*c;

	if (!(c = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)) || s == NULL)
		return (0);
	return (ft_strcpy(c, s));
}
