/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 18:01:16 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/18 20:26:33 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef INT_MAX
#  define INT_MAX		0x7fffffff
#  define INT_MIN		(-INT_MAX - 1)
# endif

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void			ft_putchar(int c);
void			ft_putstr(char *str);
void			ft_putnbr(int number);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *s1, const void *s2, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *s1, const void *s2, size_t n);
const void		*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlen(const char *s);
int				ft_isspace(int c);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_islower(int c);
int				ft_isupper(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strcpy(char *dest, const char *src);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
char			*ft_strcat(char *dest, const char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_atoi(const char *str);
char			*ft_strdup(const char *s1);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strnew(size_t size);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(int c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
#endif
