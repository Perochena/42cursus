/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 23:43:32 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/18 18:12:09 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(const char c, char const *set)
{
	size_t i;

	i = 0;
	while (set[i])
		if (set[i++] == c)
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*res;

	start = 0;
	while (s1[start] && ft_isset(s1[start], set))
		start++;
	if (!s1[start])
		return (ft_strcpy(ft_strnew(0), ""));
	len = start - 1;
	while (s1[++len])
		end = !ft_isset(s1[len], set) ? len : end;
	if (!(res = ft_strnew(end - start + 1)))
		return (NULL);
	len = 0;
	while (start <= end)
		res[len++] = s1[start++];
	res[len] = '\0';
	return (res);
}
