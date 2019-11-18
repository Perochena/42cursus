/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 23:44:35 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/18 18:09:12 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
