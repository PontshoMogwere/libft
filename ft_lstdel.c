/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:57:45 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/13 11:47:42 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;

	temp = (*alst);
	if (!(alst))
		return ;
	while (temp->next != NULL)
	{
		del((*alst)->content, (*alst)->content_size);
		temp = (*alst)->next;
		free(temp);
		*alst = NULL;
	}
	temp = NULL;
}	
