/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 23:59:34 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/08 22:42:16 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a, int b, int c)
{
	char	digits[5];

	if (a < b && b < c)
	{
		digits[0] = a + '0';
		digits[1] = b + '0';
		digits[2] = c + '0';
		if (a != 7 || b != 8 || c != 9)
		{
			digits[3] = ',';
			digits[4] = ' ';
			write(1, digits, 5);
		}
		else
		{
			write(1, digits, 3);
		}
	}
}

void	ft_print_comb(void)
{
	int		i;
	int		a;
	int		b;
	int		c;

	i = 0;
	while (i < 1000)
	{
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;
		print(a, b, c);
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
