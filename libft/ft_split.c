/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 23:44:58 by ramrodri          #+#    #+#             */
/*   Updated: 2019/12/02 20:45:10 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*d;

	if (!n)
		return (dst);
	d = dst;
	while (n && *src)
	{
		*dst++ = *src++;
		n--;
	}
	while (n)
	{
		*dst++ = '\0';
		n--;
	}
	return (d);
}

static char		*ft_strndup(const char *s1, size_t n)
{
	char	*cpy;

	if (!(cpy = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	ft_strncpy(cpy, s1, n);
	cpy[n] = '\0';
	return (cpy);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	len = ft_wordcount(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	tab[len] = NULL;
	i = 0;
	while (*s)
	{
		len = 0;
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
		{
			s++;
			len++;
		}
		if (*s || (!*s && len))
			tab[i++] = ft_strndup(s - len, len);
	}
	return (tab);
}
