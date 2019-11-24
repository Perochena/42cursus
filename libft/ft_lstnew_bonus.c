/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 22:37:50 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/20 09:01:55 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
t_list	ft_lstnew(void const *content)
{
	t_list	new;

	new.content = (void*)content;
	new.next=NULL;
	return (new);
}
t_list	*ft_lstnew(void const *content)
{
	t_list	*elem;

	if ((elem = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	elem->content = (void*)content;
	elem->next = NULL;
	return (elem);
}
*/
t_list	ft_lstnew(void const *content)
{
	t_list *new;
   
	new = malloc(sizeof(t_list));
	new->content = (void*)content;
	return (*new);
}
