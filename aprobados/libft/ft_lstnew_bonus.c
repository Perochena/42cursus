/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 22:37:50 by ramrodri          #+#    #+#             */
/*   Updated: 2019/12/02 19:14:51 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list	*elem;

	if ((elem = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	elem->content = (void*)content;
	elem->next = NULL;
	return (elem);
}
