/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nodes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:42:41 by ramrodri          #+#    #+#             */
/*   Updated: 2019/10/23 21:12:34 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

void	ft_print_nodes(t_bsq *root)
{
	t_bsq *node;

	node = root;
	while (node->next != NULL)
	{
		ft_putstr(&node->box);
		node = node->next;
	}
}
