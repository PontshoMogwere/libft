/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:42:55 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/11 18:28:17 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst == NULL)
		return ;
	if ((**alst).next != NULL)
	{
		del((**alst).content, (**alst).content_size);
		free(*alst);
		*alst = NULL;
	}else
	{
		del((**alst).content, (**alst).content_size);
		free(*alst);
		alst = NULL;
	}	
}

int main(void)
{
	char *data = "hello, i'm a data";
    t_list *l = ft_lstnew(data, strlen(data) + 1);

    if (!strcmp(data, l->content))
     

	return (0);
}
