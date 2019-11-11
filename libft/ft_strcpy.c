#include "ft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
