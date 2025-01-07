/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 21:15:30 by mmaria-g          #+#    #+#             */
/*   Updated: 2025/01/06 21:23:42 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>
# include <stdint.h>

char	*get_next_line(int fd);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strndup(const char *s, int i);
char	*ft_read(int fd, char *temp);
char	*ft_strdup(const char *src);
void	*ft_calloc(size_t nelem, size_t elsize);
int	    ft_strposchr(const char *s, char c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *ptr, int c, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);


#endif