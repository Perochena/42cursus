/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:48:21 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/18 19:34:04 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*d_swap;
	const char	*s_swap;

	if (s1 <= s2)
		return (ft_memcpy(s1, s2, n));
	d_swap = (char *)s1 + n;
	s_swap = (char *)s2 + n;
	while (n)
	{
		d_swap--;
		s_swap--;
		n--;
		*d_swap = *s_swap;
	}
	return (s1);
}
