/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 23:47:43 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/10/21 00:24:24 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>


int		ft_isalpha(int c);

/*Checks c is a decimal digit.
 -- Return:
function return non-zero if c is a decimal digit; otherwise, they shall 
return 0.*/
int		ft_isdigit(int c);

/*Checks c is an alphanumeric.
 -- Return:
function return non-zero if c is an alphanumeric character; otherwise, they
shall return 0.*/
int		ft_isalnum(int c);

/*Checks c is a 7-bit US-ASCII.
 -- Return:
function return non-zero if c is a is a 7-bit US-ASCII character; otherwise, 
they shall return 0.*/
int		ft_isascii(int c);

/*Checks c is a printable character.
 -- Return:
function return non-zero if c is a printable character character; otherwise, 
they shall return 0.*/
int		ft_isprint(int c);

/*check the size string.
 -- Return:
integer with length string .*/
size_t	ft_strlen(const char *str);

/* The function fills the first n bytes of the memory area pointed to by s 
with the constant byte c.
 -- Return:
 Pointer to the memory area s. */
void	*ft_memset(void *ptr, int c, size_t n);

/* The function erases the data in the n bytes of the memory starting at the 
location pointed to by s, by writing zeros (bytes containing '\0') to that
area. */
void	ft_bzero(void *ptr, unsigned int n);

/* The functions copy strings respectively */
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

/* The functions copy and concatenate strings respectively */
size_t	ft_strlcat(char *dest, const char *src, size_t size);

/* The  function compares the two strings s1 and s2. It returns an integer less
than, equal to, or greater than zero if s1 is found, respectively, to be less 
than, to match, or be greater than s2. */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/* The function converts the initial portion of the string pointed to
by nptr to int */
int		ft_atoi(const char *str);

/* The function returns a pointer to a new string which is a duplicate
of the string s.  Memory for the new string is obtained with malloc(3), and can
be freed with free(3). */
char	*ft_strdup(const char *src);

/*  The function locates the first	occurrence of the  null-terminated  string
little in the string big, where not more than len characters are searched. */
char	*ft_strnstr(const char *str, const char *to_find, size_t len);

/*  If c is a lowercase letter, returns its uppercase equivalent, if an 
uppercase representation exists in the current locale. */
int		ft_toupper(int c);

/*  If c is an uppercase letter, returns its lowercase equivalent, if a 
lowercase representation exists in the current locale. */
int		ft_tolower(int c);

/* The function copies n bytes from memory area src to memory area dest.  
The memory areas must not overlap. */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/* The function copies n bytes from memory area src to memory area dest. */
void	*ft_memmove(void *dest, const void *src, unsigned int n);

/* The function returns a pointer to the first occurrence
of the character c in the string s. */
char	*ft_strchr(char *s, int c);

/* The function returns a pointer to the last occurrence
of the character c in the string s. */
char	*ft_strrchr(char *s, int c);

/* The function scans the initial n bytes of the memory area pointed to by
s for the first instance of c.  Both c and the bytes of the memory area 
pointed to by s are interpreted as unsigned char. */
void	*ft_memchr(const void *s, int c, size_t n);

/* The function compares the first n bytes (each interpreted as unsigned 
char) of the memory areas s1 and s2. */
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);

/* The function shall allocate unused space for an array of nelem elements
each of whose size in bytes is elsize. */
void	*ft_calloc(size_t nelem, size_t elsize);

/* Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’ */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/* Allocates (with malloc(3)) and returns a new string, which is the result of
the concatenation of ’s1’ and ’s2’. */
char	*ft_strjoin(char const *s1, char const *s2);

/* Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
specified in ’set’ removed from the beginning and the end of the string. */
char	*ft_strtrim(char const *s1, char const *set);

/* Allocates (with malloc(3)) and returns an array of strings obtained by 
splitting ’s’ using the character ’c’ as a delimiter. The array must end with
a NULL pointer */
char	**ft_split(const char *str, char *charset);

/* Allocates (with malloc(3)) and returns a string representing the integer
received as an argument. Negative numbers must be handled. */
char	*ft_itoa(int n);

/* Applies the function ’f’ to each character of the string ’s’, and passing
its index as first argument to create a new string (with malloc(3)) resulting
from successive applications of ’f’. */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* Applies the function ’f’ on each character of the string passed as argument,
passing its index as first argument. Each character is passed by address to ’f’
to be modified if necessary.*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/* Outputs the character ’c’ to the given file descriptor. */
void	ft_putchar_fd(char c, int fd);

/* Outputs the string ’s’ to the given file descriptor. */
void	ft_putstr_fd(char *s, int fd);

/* Outputs the string ’s’ to the given file descriptor followed by a newline.*/
void	ft_putendl_fd(char *s, int fd);

/* Outputs the integer ’n’ to the given file descriptor. */
void	ft_putnbr_fd(int n, int fd);

#endif //LIBFT_H



