/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 18:34:47 by ramrodri          #+#    #+#             */
/*   Updated: 2019/12/08 19:10:07 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	static t_file	*openfiles;
	t_file			*files;
	int				i;

	files = openfiles;
	while (!(i = 0) && f && f->d != fd)
		files = files->next;
	if (fd < 0 || (!files && (!(files = malloc(sizeof(*files))) ||
		((files->next = openfiles) && 0) || (files->d *= 0) || (files->d += fd) < 0 ||
		!(openfiles = files) || (files->i *= 0) || (files->j *= 0))) || (files->s *= 0))
		return (-1);
	while (!(files->k *= 0) && (files->i < files->j || (!(files->i *= 0) && (files->j = read(fd,
		files->r, BUFFER_SIZE)) > 0)) && (files->s == 0 || f->r[files->i] != 10 || !(++files->i)))
	{
		if (i + BUFFER_SIZE >= files->s && (files->k -= 1) && ((files->t = files->b) || 1)
				&& (files->b = (char *)malloc(sizeof(char) * (i + BUFFER_SIZE + 1))))
			while (++(files->k) < i && (files->k) < files->s)
				free(((files->b[files->k] = files->t[files->k]) && (files->k + 1 < i) ? 0 : files->t));
		if (i + BUFFER_SIZE >= files->s && ((!files->b && ((files->b = files->t) || 1))
					|| !(files->s = i + BUFFER_SIZE + 1)))
			return (-1);
		while (files->i < files->j && files->r[files->i] != '\n')
			files->b[i++] = files->r[files->i++];
	}
	return ((i || files->j > 0) && (*line = files->b) && !(files->b[i] *= 0) ? 1 : files->j);
}
