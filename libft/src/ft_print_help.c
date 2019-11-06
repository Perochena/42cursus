/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_help.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 21:25:28 by ramrodri          #+#    #+#             */
/*   Updated: 2019/10/19 21:44:34 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print_help(void)
{
	ft_putstr("ft [all] [<ft_funtion>]\n\n");
	ft_putstr("all\t Check all ft_functions\n");
	ft_putstr("<ft_function>\t Check this <ft_function>\n\n");
	ft_putstr("List ft_functins:\n");
	ft_putstr("- ft_atoi\n");
}
