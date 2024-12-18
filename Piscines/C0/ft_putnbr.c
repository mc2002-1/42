/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:55:25 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/26 09:44:54 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	digitos_neg(int nb, char *digits, int *i)
{
	while (nb != 0)
	{
		digits[(*i)++] = '0' - (nb % 10);
		nb /= 10;
	}
}

void	digitos_pos(int nb, char *digits, int *i)
{
	while (nb != 0)
	{
		digits[(*i)++] = '0' + (nb % 10);
		nb /= 10;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	char	digits[11];

	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		digitos_neg(nb, digits, &i);
	}
	else
	{
		if (nb == 0)
			write(1, "0", 1);
		else
			digitos_pos(nb, digits, &i);
	}
	while (i > 0)
		write(1, &digits[--i], 1);
}


int main (){
    ft_putnbr (2147483648);
    return 0;
}

