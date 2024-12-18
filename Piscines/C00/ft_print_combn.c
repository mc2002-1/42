/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 22:11:36 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/08 22:13:37 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	digitos_pos(int nb, char *digits)
{
	int	i;

	i = 0;
	while (nb != 0)
	{
		digits[i++] = '0' + (nb % 10);
		nb /= 10;
	}
	return (i);
}

int	check_if_last(int n, int keeper)
{
	int	counter;
	int	flag;

	flag = 0;
	counter = 9;
	while (counter > (9 - n))
	{
		if ((keeper % 10) != counter)
		{
			flag = 1;
			break ;
		}
		keeper /= 10;
		counter--;
	}
	return (flag);
}

void	contador(char *digits, int n, int keeper)
{
	int	f;
	int	counter;

	counter = 0;
	f = n - 1;
	while (f > 0)
	{
		if (digits[f - 1] > digits[f])
		{
			counter++;
		}
		f--;
	}
	if (counter == (n - 1))
	{
		f = n;
		while (f > 0)
		{
			write(1, &digits[--f], 1);
		}
		if (check_if_last(n, keeper) == 1)
			write(1, ", ", 2);
	}
}

void	initialize_variables(int *i, int *f, int *keeper)
{
	*f = 0;
	*keeper = *i;
}

void	ft_print_combn(int n)
{
	int		i;
	int		f;
	int		keeper;
	int		max_value;
	char	digits[10];

	i = 0;
	max_value = 1;
	while (i < n)
	{
		max_value *= 10;
		i++;
	}
	i = 1;
	while (i < max_value)
	{
		initialize_variables(&i, &f, &keeper);
		f = digitos_pos(i, digits);
		while (f < n)
		{
			digits[f++] = '0';
		}
		contador(digits, n, keeper);
		i++;
	}
}
/*
int	main(void)
{
	ft_print_combn(6);
	return (0);
}
*/
