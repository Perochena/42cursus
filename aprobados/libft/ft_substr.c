/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:56:45 by ramrodri          #+#    #+#             */
/*   Updated: 2019/12/08 09:57:30 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	if (!s || !(res = ft_strnew(len)))
		return (NULL);
	if (start > ft_strlen(s))
		return (res);
	i = 0;
	while (i < len)
		res[i++] = s[start++];
	return (res);
}
