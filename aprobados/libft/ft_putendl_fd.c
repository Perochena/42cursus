/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 23:45:18 by ramrodri          #+#    #+#             */
/*   Updated: 2019/12/08 10:05:09 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL || fd < 0 || fd > OPEN_MAX_FILE)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
