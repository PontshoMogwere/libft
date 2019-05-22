/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:45:49 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/22 12:37:03 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void		ft_memdel(void **ap)
{
	free((void *)ap);
	ap = NULL;
}

int main() {

   char name[100];
   char *p;
   char **description;

   strcpy(name, "Zara Ali");

   /* allocate memory dynamically */
   p = (char *)malloc( 200 * sizeof(char) );

   strcpy( p, "Zara ali a DPS student in class 10th");
   description = &p;

   printf("Name = %s\n", name );
   printf("Description: %s\n", *description );
   ft_memdel(description);
	printf("Description: %s\n", *description );
	return (0);
}
