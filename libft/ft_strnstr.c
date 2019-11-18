/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:49:25 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/18 18:11:50 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	int		i;

	b = (char *)big;
	i = 0;
	if (ft_strlen(little) < 1)
		return (b);
	while (b[i] && len > 0)
	{
		if (ft_strlen(little) > len)
			return (NULL);
		if (ft_strncmp(b + i, little, ft_strlen(little)) == 0)
			return (b + i);
		i++;
		len--;
	}
	return (NULL);
}
