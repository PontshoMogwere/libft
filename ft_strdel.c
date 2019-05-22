/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:21:40 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/22 12:44:41 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void		ft_strdel(char **as)
{
	free(*as);
	as = NULL;
}

int main () {

   char  *ptr;
   char  **pptr;

//	pptr = (char **)malloc(sizeof(char) * 30);
	ptr = (char *)malloc(sizeof(char) * 30);
   /* take the address of var */
	ptr = "This is tutorialspoint.com";
   /* take the address of ptr using address of operator & */
   pptr = &ptr;

   /* take the value using pptr */
   printf("Value available at *ptr = %s\n", ptr );
   printf("Value available at **pptr = %s\n", *pptr);
   ft_strdel(pptr);
   printf("Value available at **pptr = %s\n", *pptr);
   return 0;
}
