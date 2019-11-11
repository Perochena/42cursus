#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>
#include "../ft.h"
#define MAX_SIZE_FILE 4096

void	show(int num)
{
	printf("Parameters %d\n", num);
        ft_putchar('\n');
        ft_putstr("FT_ISALNUM ");
        ft_putnbr(ft_isalnum(num));
        ft_putchar('\n');
        ft_putstr("ISALNUM ");
        ft_putnbr(isalnum(num));
        ft_putchar('\n');
	ft_putstr("--------------------------------------------\n");
}
void	test_isalnum(void)
{
	int	i;

	ft_putstr("############################################\n");
	ft_putstr("###         TEST fuction ISALNUM         ###\n");
	ft_putstr("############################################\n");
	i = 0;
        while (i <= 47)
        {
                show(i);
                i++;
        }
        i = '0';
        while (i <= '9')
        {
                show(i);
                i++;
        }
	i = 58;
        while (i <= 64)
        {
                show(i);
                i++;
        }
	i = 'A';
        while (i <= 'Z')
        {
                show(i);
                i++;
        }
	i = 91;
        while (i <= 96)
        {
                show(i);
                i++;
        }
	i = 'a';
        while (i <= 'z')
        {
                show(i);
                i++;
        }
	i = 123;
        while (i <= 127)
        {
                show(i);
                i++;
        }
}
