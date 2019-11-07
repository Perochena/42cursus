#include "ft.h"

void	test_atoi(void)
{
	ft_putnbr(ft_atoi("0"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("546:5"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("-4886"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("+548"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("054854"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("000074"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("+-54"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("-+48"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("--47"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("++47"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("+47+5"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("-47-5"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("\e475"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("\t\n\r\v\f  469 \n"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("-2147483648"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("2147483647"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("\t\n\r\v\fd469 \n"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("\n\n\n  -46\b9 \n5d6"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(""));
	ft_putchar('\n');
}
