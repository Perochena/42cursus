/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nodes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:33:13 by ramrodri          #+#    #+#             */
/*   Updated: 2019/10/23 21:10:39 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int		ft_count_nodes(t_bsq *root)
{
	t_bsq	*node_aux;
	int		count;

	node_aux = root;
	count = 0;
	while (node_aux != NULL)
	{
		count++;
		node_aux = node_aux->next;
	}
	return (count);
}
