#include "ft.h"

void	ft_putnbr(int number)
{
	unsigned int	nbr;

	if (number < 0)
	{
		ft_putchar('-');
		nbr = number * -1;
	}
	else
		nbr = number;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}
