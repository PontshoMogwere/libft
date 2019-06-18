/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:44:39 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/17 14:52:17 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	
	if (!f || !lst)
		return (NULL);
	temp = f(lst);
	while (lst != NULL)
	{
		lst = lst->next;
		temp = temp->next;
		if (!(temp = f(lst)))
			return (NULL);
	}
	return (temp);
}
