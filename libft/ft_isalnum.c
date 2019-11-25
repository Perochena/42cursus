/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:46:54 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/18 18:04:31 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c == -1)
		return (-1);
	if (c < 0)
		return ((unsigned char)c);
	//if (ft_isdigit(c) != 0 || ft_isalpha(c) != 0)
	//	return (1);
	//return (0);
	if (ft_isalpha(c) || ft_isdigit(c))
		return (c);
	else
		return (0);

}
