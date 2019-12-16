/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 18:34:47 by ramrodri          #+#    #+#             */
/*   Updated: 2019/12/11 22:33:10 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	static t_file	*openfiles;
	t_file			*files;
	int				i;

	if (!line)
		return (-1);
	files = openfiles;
	i = 0;
	while (files && files->fd != fd)
		files = files->next;
	if (fd < 0 || (!files && (!(files = malloc(sizeof(*files))) ||
		((files->next = openfiles) && 0) || (files->fd *= 0) || (files->fd += fd) < 0 ||
		!(openfiles = files) || (files->buffer_index *= 0) || (files->j *= 0))) || (files->line_size *= 0))
		return (-1);
	while (!(files->line_index *= 0) && (files->buffer_index < files->j || (!(files->buffer_index *= 0) && (files->j = read(fd,
		files->buffer, BUFFER_SIZE)) > 0)) && (files->line_size == 0 || files->buffer[files->buffer_index] != 10 || !(++files->buffer_index)))
	{
		if (i + BUFFER_SIZE >= files->line_size && (files->line_index -= 1) && ((files->tmp = files->line) || 1)
				&& (files->line = (char *)malloc(sizeof(char) * (i + BUFFER_SIZE + 1))))
			while (++(files->line_index) < i && (files->line_index) < files->line_size)
				free(((files->line[files->line_index] = files->tmp[files->line_index]) && (files->line_index + 1 < i) ? 0 : files->tmp));
		if (i + BUFFER_SIZE >= files->line_size && ((!files->line && ((files->line = files->tmp) || 1))
					|| !(files->line_size = i + BUFFER_SIZE + 1)))
			return (-1);
		while (files->buffer_index < files->j && files->buffer[files->buffer_index] != '\n')
			files->line[i++] = files->buffer[files->buffer_index++];
	}
	return ((i || files->j > 0) && (*line = files->line) && !(files->line[i] *= 0) ? 1 : files->j);
}
