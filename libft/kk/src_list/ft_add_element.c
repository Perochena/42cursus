/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_element.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 22:31:14 by ramrodri          #+#    #+#             */
/*   Updated: 2019/10/23 23:20:09 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft.h"

t_bsq	*ft_add_element(t_bsq *root, t_bsq node)
{
	t_bsq *newnode;
	t_bsq *node_aux;

	newnode = ft_malloc_node();
	newnode->box = node.box;
	newnode->value = node.value;
	newnode->next = NULL;
	if (root == NULL)
		return (newnode);
	else
	{
		node_aux = root;
		while (node_aux->next != NULL)
			node_aux = node_aux->next;
		node_aux->next = newnode;
		newnode->previous = node_aux;
		node_aux->previous = NULL;
	}
	return (root);
}
