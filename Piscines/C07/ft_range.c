/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 04:34:47 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/22 08:12:48 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;
	int	*start;

	if (min >= max)
		return (NULL);
	p = (int *)malloc((max - min) * sizeof(int));
	if (p == NULL)
		return (NULL);
	start = p;
	i = min;
	while (i < max)
	{
		*p = i;
		p++;
		i++;
	}
	return (start);
}
/*
int main()
{
    int min = 5;
    int max = 3;
    int *p = ft_range(min, max);
    int *start = p;

    
    if (p != NULL)
    {
        while (p < start + (max - min))
        {
            printf("%i", *p);
            p++;
        }
        free(start); 
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/