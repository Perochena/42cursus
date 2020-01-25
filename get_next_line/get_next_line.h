/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 14:24:33 by tfleming          #+#    #+#             */
/*   Updated: 2020/01/25 19:24:24 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# define BUF_SIZE		1
# define SPILL_MULT		2
# define MAX_FD			1000

typedef struct		s_stock
{
	char			*spill;
	long			length;
	long			lu;
	int				read_ret;
	char			*line_end;
}					t_stock;

char				*ft_strcpy(char *dest, const char *src);
char				*ft_strsub(char const *source, size_t start, size_t len);
void				*ft_memcpy(void *dest, const void *source, size_t len);
char				*ft_strncpy(char *dest, const char *src, size_t max);
char				*ft_strnew(size_t size);
void				*ft_memalloc(size_t size);
void				ft_bzero(void *string, size_t len);
void				*ft_memset(void *destination, int int_value, size_t len);
int					get_next_line(int fd, char **line);

#endif
