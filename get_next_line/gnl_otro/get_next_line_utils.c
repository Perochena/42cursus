#include "get_next_line.h"

char		*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char			*ft_strsub(char const *source, size_t start, size_t len)
{
	char		*substring;

	substring = ft_strnew(len);
	if (!substring)
		return (NULL);
	ft_strncpy(substring, source + (start * sizeof(char)), len);
	return (substring);
}

void			*ft_memcpy(void *dest, const void *source, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		((char*)dest)[i] = ((char*)source)[i];
		i++;
	}
	return (dest);
}

char		*ft_strncpy(char *dest, const char *src, size_t max)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < max)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < max)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char			*ft_strnew(size_t size)
{
	return (ft_memalloc(size + 1));
}

void			*ft_memalloc(size_t size)
{
	void	*fresh;

	if (size == 0)
		return (NULL);
	fresh = malloc(size);
	if (fresh == NULL)
		return (NULL);
	ft_bzero(fresh, size);
	return (fresh);
}

void			ft_bzero(void *string, size_t len)
{
	ft_memset(string, '\0', len);
}

void			*ft_memset(void *destination, int int_value, size_t len)
{
	size_t			i;
	unsigned char	*location;
	unsigned char	value;

	value = (unsigned char)int_value;
	location = (unsigned char*)destination;
	i = 0;
	while (i < len)
	{
		location[i] = value;
		i++;
	}
	return (destination);
}
