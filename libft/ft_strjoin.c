#include "ft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *res;

	if (!(res = (char *)malloc(ft_strlen(s1) + ft_strlen(s1) + 1)))
		return (NULL);
	ft_strcpy(res, s1);
	ft_strcat(res, s2);
	return (res);
}
