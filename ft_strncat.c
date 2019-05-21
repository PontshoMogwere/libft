/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:49:09 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/21 09:01:58 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char		*ft_strncat(char	*restrict s1, const char *restrict s2, size_t n)
{
	int i;
	int holds1;

	i = 0;
	holds1 = ft_strlen(s1);
	while(s2[i] != '\0' || n-- != 0)
	{
		s1[holds1] = s2[i];
		i++;
	}
	s1[holds1] = '\0';
	return (s1);
}
