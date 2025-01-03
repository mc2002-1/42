/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 03:45:29 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/18 04:02:52 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aux(long *n, char *base, char *signal)
{
	if (*n == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	else if (*n < 0)
	{
		*signal = '-';
		*n = *n * (-1);
	}
}

int	aux1(char *base, int *i)
{
	int	f;

	while (base[*i] != '\0')
	{
		f = *i + 1;
		if (base[*i] == '+' || base[*i] == '-'
			|| base[*i] <= 32 || base[*i] == 127)
		{
			return (-1);
		}
		while (base[f] != '\0')
		{
			if (base[*i] == base[f])
			{
				return (-1);
			}
			f++;
		}
		(*i)++;
	}
	return (0);
}

void	aux2(int *f, char *converted)
{
	while (*f > 0)
	{
		write(1, &converted[*f - 1], 1);
		(*f)--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		f;
	char	converted[33];
	char	signal;
	long	n;

	n = nbr;
	signal = 0;
	f = 0;
	i = 0;
	if (aux1(base, &i) == -1)
		return ;
	if (i < 2)
		return ;
	aux(&n, base, &signal);
	while (n != 0)
	{
		converted[f] = base[n % i];
		n /= i;
		f++;
	}
	if (signal)
		write(1, &signal, 1);
	aux2(&f, converted);
}
/*
int main ()
{
    int  nbr = 60;
    char base[] = "0123456789ABCDEF";

    ft_putnbr_base(nbr, base);
    return 0;
}
*/