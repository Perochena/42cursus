/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:53:12 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/18 20:27:14 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		putwchar_fd(int c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putchar_fd(int c, int fd)
{
	if (c < 0x80)
		putwchar_fd (c, fd);
	else if (c < 0x800)
	{
		putwchar_fd ((c >> 6) | 0xc0, fd);
		putwchar_fd ((c & 0x3f) | 0x80, fd);
	}
	else if (c < 0x10000)
	{
		putwchar_fd ((c >> 12) | 0xE0, fd);
		putwchar_fd (((c >> 6) & 0x3F) | 0x80, fd);
		putwchar_fd ((c & 0x3F) | 0x80, fd);
	}
	else if (c < 0x200000)
	{
		putwchar_fd ((c >> 18) | 0xF0, fd);
		putwchar_fd (((c >> 12) & 0x3F) | 0x80, fd);
		putwchar_fd (((c >> 6) & 0x3F) | 0x80, fd);
		putwchar_fd ((c & 0x3F) | 0x80, fd);
	}
}
