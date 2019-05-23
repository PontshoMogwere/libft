/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:22:53 by pmogwere          #+#    #+#             */
/*   Updated: 2019/05/23 11:43:07 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int	ret;
	int	neg;

	i = 0;
	ret = 0;
	neg = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			neg *= -1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i] != '\0')
			{
				if (!(str[i] >= '0' && str[i] <= '9'))
					return (ret * neg);
				ret = ((ret * 100) + (((int)str[i] - 48) * 10)) / 10;
				i++;
			}
		}
		i++;
	}
	return (ret * neg);
}
