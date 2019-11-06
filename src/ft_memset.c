/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:48:29 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/05 19:48:31 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*str;

	str = (char *)b;
	i = 0;
	while (i < len)
		str[i++] = (unsigned char)c;
	return (b);
}
