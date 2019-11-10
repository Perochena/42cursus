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

int	ft_atoi(const char *str)
{
	{
		int	i;
		int	nbr;
		int	negative;

		nbr = 0;
		negative = 0;
		i = 0;
		while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
				(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
			i++;
		if (str[i] == '-')
			negative = 1;
		if (str[i] == '+' || str[i] == '-')
			i++;
		while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
		{
			nbr *= 10;
			nbr += (int)str[i] - '0';
			i++;
		}
		if (negative == 1)
			return (-nbr);
		else
			return (nbr);
	}
}
