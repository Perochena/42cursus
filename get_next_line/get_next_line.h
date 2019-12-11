/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 18:34:57 by ramrodri          #+#    #+#             */
/*   Updated: 2019/12/10 22:23:31 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# define BUFFER_SIZE 32

/*
** j 	Number of characters in read buffer
*/

typedef struct	s_file
{
	int				fd;
	int				line_size;
	char			*line;
	int				line_index;
	char			*tmp;
	char			buffer[BUFFER_SIZE];
	int				buffer_index;
	int				j;
	struct s_file	*next;
}				t_file;

int				get_next_line(int fd, char **line);
#endif
