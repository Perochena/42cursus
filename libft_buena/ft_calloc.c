/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 18:28:21 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/10 19:22:22 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*calloc(size_t count, size_t size)
{
	char	*str;

	str = NULL;
	str = malloc(count * size);
	if (str != NULL)
		ft_bzero(str, count * size);
	return str;
}
