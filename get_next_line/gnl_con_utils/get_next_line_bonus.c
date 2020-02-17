#include "get_next_line_bonus.h"

static char				*ft_clean_line(char *save, char **line, int r)
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	while (save[i])
	{
		if (save[i] == '\n')
			break ;
		i++;
	}
	if (i < ft_strlen(save))
	{
		*line = ft_substr(save, 0, i);
		tmp = ft_substr(save, i + 1, ft_strlen(save));
		free(save);
		save = ft_strdup(tmp);
		free(tmp);
	}
	else if (r == 0)
	{
		*line = save;
		save = NULL;
	}
	return (save);
}

static char				*ft_save(char *buffer, char *save)
{
	char			*tmp;

	if (save)
	{
		tmp = ft_strjoin(save, buffer);
		free(save);
		save = ft_strdup(tmp);
		free(tmp);
	}
	else
		save = ft_strdup(buffer);
	return (save);
}

static t_list           *get_correct_file(t_list **file, int fd)
{
        t_list              *tmp;

        tmp = *file;
        while (tmp)
        {
            if (tmp->fd == fd)
                 return (tmp);
            tmp = tmp->next;
        }
        tmp = ft_lstnew("\0", fd);
        ft_lstadd(file, tmp);
        tmp = *file;
        return (tmp);
}

int					get_next_line(int fd, char **line)
{
	static char		*save[4096];
    static t_list   *file;
    t_list          *curr;
	char			buffer[BUFFER_SIZE + 1];
	int				ret;

	while ((ret = read(fd, buffer, BUFFER_SIZE)))
	{
		if (ret == -1)
			return (-1);
		buffer[ret] = '\0';
		save[fd] = ft_save(buffer, save[fd]);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	if (ret <= 0 && !save[fd])
	{
		*line = ft_strdup("");
		return (ret);
	}
	save[fd] = ft_clean_line(save[fd], line, ret);
	if (r <= 0 && !save[fd])
		return (ret);
	return (1);
}
