#include "ft.h"

static void	ft_putnbr_recursive_fd(unsigned int n, int *fd)
{
	if (n >= 10)
		ft_putnbr_recursive_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', *fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_recursive_fd(-n, &fd);
	}
	else
		ft_putnbr_recursive_fd(n, &fd);
}
