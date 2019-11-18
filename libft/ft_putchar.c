/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:53:12 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/18 20:17:40 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static void		putwchar(int c)
{
	write (1, &c, 1);
}

void	ft_putchar(int c)
{
	if (c < 0x80)
		putwchar (c);
	else if (c < 0x800)
	{
		putwchar ((c >> 6) | 0xc0);
		putwchar ((c & 0x3f) | 0x80);
	}
	else if (c < 0x10000)
	{
		putwchar ((c >> 12) | 0xE0);
		putwchar (((c >> 6) & 0x3F) | 0x80);
		putwchar ((c & 0x3F) | 0x80);
	}
	else if (c < 0x200000)
	{
		putwchar ((c >> 18) | 0xF0);
		putwchar (((c >> 12) & 0x3F) | 0x80);
		putwchar (((c >> 6) & 0x3F) | 0x80);
		putwchar ((c & 0x3F) | 0x80);
	}
}
