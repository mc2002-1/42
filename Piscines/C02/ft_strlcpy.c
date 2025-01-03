/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 02:26:43 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/10 03:37:40 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
// #include <string.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
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

// int main()
// {
//     unsigned int size_dest = 4;
//     unsigned int size_src;
//     char src[] = "Siga siga";
//     char dest[size_dest];

//     size_src = ft_strlcpy(dest, src, size_dest);  

//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);
//     printf("Size of source: %u\n", size_src);

//     return 0;
// }
