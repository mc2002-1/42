/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 03:58:51 by mmaria-g          #+#    #+#             */
/*   Updated: 2025/01/06 21:20:40 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	src_length = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	if (size == 0)
	{
		return (src_length);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_length);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*str;
	unsigned int	size;
	unsigned int	size_s1;
	unsigned int	size_s2;

	if (s1 && s2)
	{
		size_s1 = ft_strlen((char *) s1);
		size_s2 = ft_strlen((char *) s2);
		size = size_s1 + size_s2;
		str = (char *) malloc(size * sizeof(char) + 1);
		if (str)
		{
			ft_strlcpy(str, (char *)s1, size_s1 + 1);
			ft_strlcpy(str + size_s1, (char *)s2, size_s2 + 1);
			return (str);
		}
	}
	return (NULL);
}

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*array;

	array = (void *)malloc (nelem * elsize);
	if (array)
	{
		ft_memset(array, 0, nelem * elsize);
		return (array);
	}
	return (NULL);
}

char	*ft_read(int fd, char *next_line)
{
	char	*line;
	int		result_read;

	line = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!line)
		return NULL;
	result_read = 1;
	while (result_read > 0 && ft_strposchr(line, '\n') == -1)
	{
		result_read = read(fd, line, BUFFER_SIZE);
		if (result_read == -1)
		{
			free(next_line);
			free(line);
			return (NULL);
		}
		if (result_read == 0)
			break;
		line[result_read] = '\0';
		next_line = ft_strjoin(next_line, line);
		if (!next_line)
			return (free(line),(NULL));
	}
	return (free(line),next_line);
}

char	*get_next_line(int fd)
{
	static char *next_line;
	char		*final;
	char		*temp;
	int			newline_pos;

	temp = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!next_line)
		next_line = ft_calloc(1, sizeof(char));
	next_line = ft_read(fd, next_line);
	if (!next_line || ft_strlen(next_line) == 0)
		return (NULL);
	newline_pos = ft_strposchr(next_line, '\n');
	if (newline_pos != -1)
	{
		final = ft_strndup(next_line, newline_pos + 1);
		if (!final)
			return (NULL);
		temp = ft_strdup(next_line + newline_pos + 1); 
		next_line = temp;
	}
	else
		final = next_line;
	return (final);
}

