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

t_list	ft_lstnew(void const *content)
{
	t_list	new;

	if(!content)
		content=NULL;
	/*
	else
	{
		if(!(new.content=(void*)malloc(sizeof(void))))
		{
			free((void*)new.content);
			content=NULL;
		}
		//else
		//	ft_memcpy(new.content,content,sizeof(content));
			//new.content = (void*)content;
	}
	*/
	new.next=NULL;
	return (new);
}
