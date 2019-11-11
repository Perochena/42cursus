/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:09:52 by frrodrig          #+#    #+#             */
/*   Updated: 2019/10/23 21:11:23 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft.h"

void	ft_delete_all(t_bsq *root)
{
	t_bsq *node_del;

	node_del = root;
	while (node_del != NULL)
	{
		node_del = ft_delete_node(node_del);
		node_del = node_del->next;
	}
}
