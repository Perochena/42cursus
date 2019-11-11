#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft.h"
#define MAX_SIZE_FILE 4096

void	test_atoi(void)
{
	/*
	int	fd;
	char	*buffer;
	char	*namefile;
	int	i;
	int	size_read;
	char	*line;

	line = (char*)malloc(sizeof(char) * MAX_SIZE_FILE);
	buffer = (char*)malloc(sizeof(char) * MAX_SIZE_FILE);
	namefile = "resources/test_atoi.txt";
	*/
	ft_putstr("TEST fuction ATOI\n");
	/*
	fd = open(namefile, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("File Error\n");
		exit (1);
	}
	while ((size_read = read(fd, &buffer, MAX_SIZE_FILE)) > 0)
	{
		i = 0;
		printf("%s\n",buffer);
		while (buffer[i] != '#')
		{
			ft_putchar(buffer[i]);
			line[i] = buffer[i];
			ft_putchar(line[i]);
			i++;
		}
		line[i] = '\0';
	}
	free(buffer);
	free(line);
	close(fd);
	*/
	FILE * fp;
	char * line = NULL;
	size_t len = 0;
	ssize_t read;

	fp = fopen("resources/test_atoi.txt", "r");
	if (fp == NULL)
		exit(EXIT_FAILURE);
	while ((read = getline(&line, &len, fp)) != -1)
	{
		printf("Retrieved line of length %zu:\n", read);
		printf("%s", line);
		ft_putstr("Parameter ");
		ft_putstr(line);
		ft_putchar('\n');
		ft_putstr("FT_ATOI ");
		ft_putnbr(ft_atoi(line));
		ft_putchar('\n');
		ft_putstr("ATOI ");
		ft_putnbr(atoi(line));
		ft_putchar('\n');
		ft_putchar('\n');
	}
	fclose(fp);
	if (line)
		free(line);
}
