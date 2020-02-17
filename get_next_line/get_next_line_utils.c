#include "get_next_line.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (s1[size])
		++size;
	if (!(new = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

t_file
	*find_file(t_file **list, int fd, int *new)
{
	t_file	*ret;
	t_file	*first;

	ret = NULL;
	first = *list;
	*new = 0;
	while (*list && !ret)
	{
		if ((*list)->fd == fd)
			ret = *list;
		*list = (*list)->next;
	}
	*list = first;
	if (!ret)
	{
		if (!(ret = (t_file *)malloc(sizeof(*ret))))
			return (NULL);
		ret->fd = fd;
		ret->next = *list;
		ret->str = NULL;
		*list = ret;
		*new = 1;
	}
	return (ret);
}

int
	find_nl(t_str *str, char *sim_str)
{
	int	i;

	if (!str)
	{
		i = 0;
		while (sim_str[i] && sim_str[i] != '\n')
			i++;
		if (sim_str[i] == '\n')
			return (1);
	}
	else
	{
		while (str)
		{
			i = 0;
			while (str->content[i]
				&& str->content[i] != '\n')
				i++;
			if (str->content[i] == '\n')
				return (1);
			str = str->next;
		}
	}
	return (0);
}

int
	read_file(t_str **str, char *buffer, int fd)
{
	int		r;
	t_str	*new;
	t_str	*first;

	if ((r = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[r] = 0;
		if (!(new = (t_str*)malloc(sizeof(*new)))
			|| !(new->content = ft_strdup(buffer)))
			return (-2);
		new->next = NULL;
		if (!*str)
			*str = new;
		else
		{
			first = *str;
			while ((*str)->next)
				(*str) = (*str)->next;
			(*str)->next = new;
			*str = first;
		}
		return (1);
	}
	return ((r < 0) ? -1 : 0);
}

int
	delete_list(t_str **list)
{
	t_str	*tmp;

	while (*list)
	{
		tmp = (*list)->next;
		free((*list)->content);
		free(*list);
		(*list) = tmp;
	}
	*list = NULL;
	return (0);
}
