/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:01:09 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/10/21 00:09:59 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	aux(long *n, int *neg, int *size)
{
	long	temp;

	temp = *n;
	while (temp != 0)
	{
		if (temp < 0)
		{
			temp = -temp;
			*n = -(*n);
			*neg = 1;
		}
		temp = temp / 10;
		(*size)++;
	}
}

char	*ft_itoa(int nbr)
{
	char	*str;
	long	n;	
	int		size;
	int		neg;
	int		i;

	size = 0;
	neg = 0;
	n = nbr;
	aux(&n, &neg, &size);
	str = malloc(sizeof(char) * size + 1 + neg);
	if (!str)
		return (NULL);
	if (neg == 1)
		str[0] = '-';
	i = size - 1 + neg;
	while (n != 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	str[size + neg + 1] = '\0';
	return (str);
}
/*
int	main(void)
{
	int	n = -2147483648;
	char *string;

	string = ft_itoa(n);
	printf("n: %i\nstring: %s\n", n, string);
	free(string);
}
*/