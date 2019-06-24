/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_elementcount.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:11:18 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/24 18:22:45 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_elementcount(char *s, char c)
{
	size_t	count;
	size_t	result;

	count = 0;
	result = 0;
	if (s == NULL)
		return (0);
	while (*s != '\0')
	{
		if (*s != c)
		{
			while (*s != c && *s != '\0')
			{
				count++;
				ft_putchar('a');
				s++;
			}
			result += count / count;
			ft_putnbr((int)result);
		}
		s++;
	}
	return (result);
}

int main(void)
{
	ft_putnbr((int)ft_elementcount("Hello", '*'));
	return (0);
}
