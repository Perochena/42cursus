/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:56:45 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/18 18:12:21 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	if (ft_strlen(s) < start)
	{
		if (!(res = ft_strnew(0)))
			return (NULL);
	}
	else
	{
		if (!(res = ft_strnew(len)))
			return (NULL);
		i = 0;
		while (i < len)
			res[i++] = s[start++];
	}
	return (res);
}
