/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 07:44:26 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/21 08:13:24 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char		*ft_strrchr(const char *s, int c)
{
	int i;
	int hol;
	char *d;
	char *e;

	i = 0;
	hol = 0;
	d = ft_strdup(s);
	e = (char *)malloc(sizeof(char));
	while (d[i] != '\0')
	{
		if (d[i] == (char)c)
		{
			e = &d[i];
			hol++;
		}
		i++;
	}
	if (hol > 0)
		return (e);
	free(e);
	return (NULL);
}
