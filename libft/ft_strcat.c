/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 23:44:35 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/11 23:44:36 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	char	*s;

	i = ft_strlen(dest);
	s = (char *)src;
	while (*s)
		dest[i++] = *s++;
	dest[i] = '\0';
	return (dest);
}
