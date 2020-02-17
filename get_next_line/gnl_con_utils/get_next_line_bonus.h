#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct      s_list
{
        void            *content;
        int             fd;
        struct s_list   *next;
}                   t_list;

int			get_next_line(int fd, char **line);
size_t		ft_strlen(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strdup(const char *s1);
char        *ft_strchr(const char *s, int c);
#endif
