/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:49:17 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/18 18:11:29 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (ft_strlen(s2) < n)
		return (ft_memcmp(s1, s2, ft_strlen(s2) + 1));
	return (ft_memcmp(s1, s2, n));
}
