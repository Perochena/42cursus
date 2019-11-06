/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:47:28 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/05 19:52:10 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_isprint(char *str)
{
	int		i;
	int		print;

	print = 1;
	i = 0;
	if (str[0] == '\0')
		return (print);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			print = 0;
			break ;
		}
		i++;
	}
	return (print);
}
