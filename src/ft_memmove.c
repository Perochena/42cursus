/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:48:21 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/05 19:48:22 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *strsrc;
	char *strdst;

	strsrc = (char*)src;
	strdst = (char*)dst;
	if (strsrc < strdst)
	{
		strsrc = strsrc + len - 1;
		strdst = strdst + len - 1;
		while (len-- > 0)
			*strdst-- = *strsrc--;
	}
	else
		while (len-- > 0)
			*strdst++ = *strsrc++;
	return (dst);
}
