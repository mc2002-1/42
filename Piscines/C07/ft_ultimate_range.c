/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 04:34:41 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/22 08:12:43 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		*(*range + i) = min;
		min++;
		i++;
	}
	return (size);
}

/*
int main()
{
    int *range;
    int min = 1;
    int max = 5;
    int size;
    int i;

    size = ft_ultimate_range(&range, min, max);

    if (size == -1)
    {
        printf("Erro na alocação de memória.\n");
        return 1;
    }
    else if (size == 0)
    {
        printf("Intervalo inválido.\n");
    }
    else
    {
        for (i = 0; i < size; i++)
        {
            printf("%d ", range[i]);
        }
        printf("\n");
    }
    free(range);

    return 0;
}
*/