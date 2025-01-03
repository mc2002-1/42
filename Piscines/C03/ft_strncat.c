/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 07:47:26 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/12 09:16:55 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*start;
	unsigned int	i;

	i = 0;
	start = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (i < nb && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (start);
}

// int main ()
// {
//     char s1[] = "Viva la forty two";
//     char s2[] = "VivA la forty two";
//     int n = 7;

//     printf("%s", ft_strncat(s1, s2, n));
// }