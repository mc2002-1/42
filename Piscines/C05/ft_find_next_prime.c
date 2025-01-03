/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 05:02:27 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/22 22:14:48 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	flag;

	while (1)
	{
		flag = 1;
		i = 1;
		while (i <= nb / 2)
		{
			if (nb % i == 0 && i != 1)
			{
				flag = 0;
				break ;
			}
			i++;
		}
		if (flag == 1 && nb > 1)
		{
			return (nb);
		}
		else
		{
			nb++;
		}
	}
}

int main()
{
    int nb = 0;
    while (nb < 1000)
    {
        printf("%i", ft_find_next_prime(nb));
        nb = ft_find_next_prime(nb) + 1;
        printf("\n");
    }
    printf("%i", ft_find_next_prime(nb));

    return 0;
}
