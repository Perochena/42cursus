/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:48:13 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/18 18:30:49 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t		p;

	if (s1 == s2)
		return (s1);
	p = 0;
	while ((p < n) && ((n - p) % 8))
	{
		((unsigned char *)(s1))[p] = ((const unsigned char *)(s2))[p];
		p++;
	}
	while (p < n)
	{
		*(unsigned long *)((unsigned long)s1 + p) =
			*(unsigned long *)((unsigned long)s2 + p);
		p += 8;
	}
	return (s1);
}
