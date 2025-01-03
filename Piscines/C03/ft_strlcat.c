/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:46:51 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/16 19:35:19 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	i;

	dest_size = 0;
	src_size = 0;
	i = 0;
	while (src[src_size] != '\0')
		src_size++;
	while (dest_size < size && dest[dest_size] != '\0')
		dest_size++;
	if (dest_size == size)
		return (size + src_size);
	while ((dest_size + i) < (size - 1) && src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	if (dest_size + i < size)
		dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}
/*
int main ()
{
    char s1[] = "Viva la forty two";
    char s2[] = "VivA la forty two";
    unsigned int n = 22;
    unsigned int r;

    r = ft_strlcat(s1, s2, n);
    printf("%s\n", s1);
    printf("%d", r);
}
*/
