/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:53:35 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/05 19:56:21 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_H
# define __FT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void		ft_print_help(void);
void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int number);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t		ft_strlen(const char *s);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(char *str);
char		*ft_toupper(char *str);
char		*ft_tolower(char *str);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char		*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(char *str);
#endif
