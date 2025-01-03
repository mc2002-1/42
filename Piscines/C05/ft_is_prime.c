/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 05:02:24 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/22 22:13:41 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	flag;

	i = 1;
	flag = 1;
	if (nb < 2)
	{
		return (0);
	}
	else
	{
		while (i <= nb / 2)
		{
			if (nb % i == 0 && i != 1)
			{
				flag = 0;
				break ;
			}
			i++;
		}
	}
	return (flag);
}

int main()
{
    int nb = 12;
    printf("%i", ft_is_prime(nb));

    return 0;
}
