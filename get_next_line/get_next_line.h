/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 18:34:57 by ramrodri          #+#    #+#             */
/*   Updated: 2019/12/08 18:34:59 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# define BUFFER_SIZE 32

/*
** t_f: Chained file info list element
** d	File descriptor
** s	Line buffer size
** b	Line buffer
** t	Pointer to temporary buffer used when reallocating line buffer
** r	Read buffer
** i	Index of next character to read in read buffer
** j 	Number of characters in read buffer
** k	Line buffer iterator
** n	Next element in chained list
*/

typedef struct	s_file
{
	int				d;
	int				s;
	char			*b;
	char			*t;
	char			r[BUFFER_SIZE];
	int				i;
	int				j;
	int				k;
	struct s_file	*next;
}				t_file;

int				get_next_line(int fd, char **line);
#endif
