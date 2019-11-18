/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:48:21 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/18 18:07:33 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char *strs2;
	char *strs1;

	strs2 = (char*)s2;
	strs1 = (char*)s1;
	if (strs2 < strs1)
	{
		strs2 = strs2 + n - 1;
		strs1 = strs1 + n - 1;
		while (n-- > 0)
			*strs1-- = *strs2--;
	}
	else
		while (n-- > 0)
			*strs1++ = *strs2++;
	return (s1);
}
