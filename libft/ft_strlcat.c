/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:48:50 by ramrodri          #+#    #+#             */
/*   Updated: 2019/12/02 20:18:22 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*d;
	char			*s;
	unsigned int	len;
	unsigned int	dest_len;

	if (!(d = (char *)ft_memchr(dest, '\0', size)))
		return (size + ft_strlen(src));
	s = (char *)src;
	d = (char *)dest;
	dest_len = ft_strlen(dest);
	len = dest_len + ft_strlen(s);
	d += dest_len;
	while (dest_len++ < size - 1 && *s)
		*d++ = *s++;
	*d = '\0';
	return (len);
}
