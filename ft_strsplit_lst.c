/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:39:19 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/26 17:00:19 by pmogwere         ###   ########.fr       */
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

static void	ft_delnode(void *s, size_t size)
{
	if (!s)
		return ;
	free((void *)s);
	size = 0;
}

t_list		*ft_strsplit_lst(char const *s, char c)
{
	size_t	i;
	t_list *temp;
	t_list *begin;

	i = ft_elementcount((char *)s, c);
	begin = NULL;
	if (!(temp = ft_lstnew(0, 0)) && s == 0)
		return (0);
	while (i-- > 0)
		ft_lstadd(&begin, temp);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			begin->content = placestring((char *)s, i);
			begin = begin->next;
			s = s + i;
		}
		else
			s++;
	}
	ft_lstdel(&temp, &ft_delnode);
	return (begin);
}
