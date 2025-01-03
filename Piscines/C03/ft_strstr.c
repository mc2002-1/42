/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 07:57:51 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/16 15:42:21 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*p1;
	char	*p2;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		start = str;
		p1 = str;
		p2 = to_find;
		while ((*p1 == *p2) && (*p2 != '\0'))
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return (start);
		str++;
	}
	return (NULL);
}
/*
int main ()
{
    char str[] = "Viva la forty two";
    char to_find[] = "la forty two";
    char *c = ft_strstr(str, to_find);

    if ((c != NULL) && (to_find[0] != '\0'))
    {
        while (*c != '\0')
        {
            write(1, c, 1);
            c++;
        }
    }
    
    return 0;
}
*/