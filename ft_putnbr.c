/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:48:43 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/03 14:03:58 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr(int n)
{
	int i;

	i = n % 10;
	if (n > 2147483647 || n < (-2147483647 -1))
		return ;
       if (n == (-2147483647 -1))
	       ft_putstr("-2147483648");
	if ( n == 0)
		ft_putchar('0');
	if (i < 0)
	{
		ft_putchar('-');
		n *= -1;
		ft_putnbr(n);
	}
	if ( i >= 0 && n / n != 0)
	{
		ft_putnbr(n / 10);
		ft_putchar(i + '0');
	}
}
