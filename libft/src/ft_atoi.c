/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:46:23 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/05 19:46:25 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_atoi(char *str)
{
	int res;
	int sign;
	int i;

	res = 0;
	sign = 1;
	i = 0;
	if (*str == '\0')
		return (0);
	while (str[i] != '\0' && (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\v' || *str == '\f'))
		i++;
	while (str[i] != '\0' && (*str == '-' || *str == '+'))
	{
		if (str[i] == '-')
			sign = (-1 * sign);
		i++;
	}
	while (str[i] != '\0' &&
		(str[i] >= '0' && str[i] <= '9'))
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (sign * res);
}
