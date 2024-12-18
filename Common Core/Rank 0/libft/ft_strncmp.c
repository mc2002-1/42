/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 06:55:57 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/10/21 00:32:09 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return ((s1[i] - s2[i]));
		i++;
	}
	return (0);
}
/*
int main ()
{
    char s1[] = "Viva la forty two";
    char s2[] = "VivA la forty two";

    printf("%d",ft_strncmp(s1, s2, 4));
}
*/
