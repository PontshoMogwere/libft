/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:44:39 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/21 16:55:35 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list 	*head;

	if (!f || !lst)
		return (0);
	temp = lst;
	head = temp;
	temp = temp->next;
	while (temp != NULL)
	{
		temp  = f(temp);
		temp->next = temp->next;
	}
	return (head);
}
