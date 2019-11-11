#include "ft.h"

char	*ft_strnew(size_t size)
{
	return (char *)ft_calloc(1, sizeof(char) * (size + 1));
}
