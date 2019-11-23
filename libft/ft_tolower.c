/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:49:49 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/18 18:12:30 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//int		ft_tolower(int c)
char		ft_tolower(char c)
{
	if (ft_isupper(c))
		return ((unsigned)(c + 32));
	return ((unsigned)c);
}
