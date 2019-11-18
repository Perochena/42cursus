/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 00:09:05 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/18 22:16:52 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long 	ret;
	int		sign;

	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	ret = 0;
	while (*str && ft_isdigit(*str))
	{
		if (ret > INT_MAX / 10 || (ret == INT_MAX / 10 && ret == INT_MAX % 10))
			return (sign > 0 ? -1 : 0);
		ret = ret * 10 + *(str++) - '0';
	}
	return ((int) sign * ret);
}
