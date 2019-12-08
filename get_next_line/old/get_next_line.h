/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 19:25:22 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/27 20:03:53 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE    8
# define FD_SIZE        4096

# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

int     get_next_line(const int fd, char **line);
char	*ft_strdup(const char *s1);
void	ft_strdel(char **as);
void	ft_memdel(void **ap);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strnew(size_t size);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strcat(char *dest, const char *src);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
void    *ft_memset(void *s, int c, size_t n);
#endif
