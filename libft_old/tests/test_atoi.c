#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft.h"
#define MAX_SIZE_FILE 4096

void	test_atoi(void)
{
	char	*namefile;
	FILE	*fd;
	char	*line;
	size_t	len;
	ssize_t	read;

	line = NULL;
	len = 0;
	namefile = "resources/test_atoi.txt";
	ft_putstr("############################################\n");
	ft_putstr("###           TEST fuction ATOI          ###\n");
	ft_putstr("############################################\n");
	fd = fopen(namefile, "r");
	if (fd == NULL)
		exit(EXIT_FAILURE);
	while ((read = getline(&line, &len, fd)) != -1)
	{
		ft_putstr("Parameter ");
		ft_putstr(line);
		ft_putstr("FT_ATOI ");
		ft_putnbr(ft_atoi(line));
		ft_putchar('\n');
		ft_putstr("ATOI ");
		ft_putnbr(atoi(line));
		ft_putchar('\n');
		ft_putstr("--------------------------------------------\n");
	}
	fclose(fd);
	if (line)
		free(line);
}
