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
	int 		i;
	char	*str;
	char	**strarry;

	i = elecount((char *)s, c);
//	printf("%i", i);
	strarry = (char **)malloc(sizeof(char *) * i);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
/*
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c)
				*str++ = *s++;
			*str = '\0';
			strarry[i++] = ft_strdup(str);
			ft_strclr(str);
		}
		s++;
	}*/
	return (strarry);
}

int main()
{
	char **temp = ft_strsplit("      split       this for   me  !       ", ' ');
	while (*temp != NULL) {
    	printf("%s ", *temp);
    	temp++;}
	return 0;
}
