/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:47:41 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/05 19:47:43 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_memalloc(size_t size)
{
	void	*zone;

	if (!(zone = malloc(size)))
		return (NULL);
	return (ft_memset(zone, 0, size));
}
