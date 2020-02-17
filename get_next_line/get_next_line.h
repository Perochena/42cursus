#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 64
# endif

typedef struct	s_str
{
	char			*content;
	struct s_str	*next;
}				t_str;

typedef struct	s_file
{
	int			fd;
	t_str		*str;
	struct s_fd	*next;
}				t_file;

int				get_next_line(int fd, char **line);

char			*ft_strdup(char const *s1);

t_file			*find_file(t_file **list, int fd, int *new);

int				find_nl(t_str *str, char *sim_str);

int				read_file(t_str **str, char *buffer, int fd);

int				delete_list(t_str **list);

#endif
