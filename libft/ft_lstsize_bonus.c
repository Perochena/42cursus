/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 23:11:41 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/18 23:13:41 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		lstsize(t_list *lst)
{
	t_list		*cursor;
	int			count;

	count = 0;
	cursor = lst;
	while (cursor)
	{
		cursor = cursor->next;
		count++;
	}
	return (count);
}
