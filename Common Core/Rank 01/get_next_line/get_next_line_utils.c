/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 21:12:59 by mmaria-g          #+#    #+#             */
/*   Updated: 2025/01/06 21:20:49 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dup;
	char	*p;

	i = 0;
	while (src[i])
		i++;
	dup = (char *)malloc((i + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	p = dup;
	while (*src)
	{
		*dup++ = *src++;
	}
	*dup = '\0';
	return (p);
}

char	*ft_strndup(const char *src, int n)
{
	char	*dup;
	int		i;

	i = 0;
	if (n <= 0)
		return (NULL);
	dup = (char *)malloc(n + 1);
	if (!dup)
		return (NULL);
	while (i < n)
	{
		dup[i] = src[i];
		i++;
	}
	dup[n] = '\0';
	return (dup);
}

int	ft_strposchr(const char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return i;
		i++;
	}
	return -1;
}

void	*ft_memset(void *ptr, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr2;

	i = 0;
	ptr2 = (unsigned char *)ptr;
	while (i < n)
	{
		ptr2[i] = (unsigned char) c;
		i++;
	}
	return (ptr);
}