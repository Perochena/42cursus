/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:49:35 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/05 19:49:37 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ss;
	int		i;

	ss = (char *)s;
	i = 0;
	while (ss[i])
		i++;
	while (i >= 0)
	{
		if ((char)c == s[i])
			return (ss + i);
		i--;
	}
	return (NULL);
}
