/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 04:34:52 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/10/21 00:25:50 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dup;
	char	*p;

	i = 0;
	if (src == NULL)
		return (NULL);
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
/*
int main()
{
    char *src = NULL;
    char *dup = ft_strdup(src);

    // Check if memory was successfully allocated and duplicated
    if (dup != NULL)
    {
        printf("%s\n", dup);
        free(dup); // Don't forget to free the duplicated string
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
