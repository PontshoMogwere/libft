/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:46:14 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/30 17:03:53 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	elecount(char *s, char c)
{
	int 	count;
	int 	result;

	count = 0;
	result = 0;
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

char		**ft_strsplit(char const *s, char c)
{
	int 	i;
	char	*str;
	char	**strarry;
	int	j;

	i = elecount((char *)s, c);
	strarry = (char **)malloc(sizeof(char *) * i);
	str = (char *)ft_memalloc(ft_strlen(s) + 1);
	if (str == NULL || strarry == NULL)
		return NULL;
	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c)
			{
				str[j++] = *s;
				s++;
			}
			str[j] = '\0';
			j = 0;
			strarry[i++] = ft_strdup(str);
			ft_strclr(str);
		}
		s++;
	}
	return (strarry);
}
