/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:16:26 by frrodrig          #+#    #+#             */
/*   Updated: 2019/10/23 21:12:11 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft.h"

t_bsq	*ft_delete_node(t_bsq *root)
{
	t_bsq *node_del;

	if (root != NULL)
	{
		node_del = root;
		root = root->next;
		free(node_del);
		return (root);
	}
	else
		return (NULL);
}
