/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:53:15 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/06 10:40:00 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	int i;

	i = n % 10;
	if (n > 2147483647 || n < (-2147483647 -1))
		return ;
	if (n == (-2147483647 -1))
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
		ft_putnbr_fd(n, fd);
	}
	if ( i >= 0 && n / n != 0)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(i + '0', fd);
	}
}
