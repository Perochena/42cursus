/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 19:31:02 by ramrodri          #+#    #+#             */
/*   Updated: 2019/10/23 22:56:30 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "test.h"

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{

			if (ft_strcmp(argv[i], "all") == 0)
			{
				test_atoi();
				test_isalnum();
			}
			else if (ft_strcmp(argv[i], "ft_atoi") == 0)
				test_atoi();
			else if (ft_strcmp(argv[i], "ft_isalnum") == 0)
				test_isalnum();
			i++;
		}
	}
	else
	{
		ft_putstr("ERROR: Parameter error\n\n");
		ft_print_help();
	}
	return (0);
}
