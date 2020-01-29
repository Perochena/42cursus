/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 23:45:10 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/18 18:08:30 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_recursive_fd(unsigned int n, int *fd)
{
	if (n >= 10)
		ft_putnbr_recursive_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', *fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_recursive_fd(-n, &fd);
	}
	else
		ft_putnbr_recursive_fd(n, &fd);
}
