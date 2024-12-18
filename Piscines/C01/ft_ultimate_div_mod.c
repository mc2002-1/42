/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 22:29:13 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/08 22:36:07 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	res;
	int	resto;

	res = *a / *b;
	resto = *a % *b;
	*a = res;
	*b = resto;
}
/*
int	main(void)
{
	int		a;
	int		b;
	char	nmr1[1];
	char	nmr2[1];

    a = 50;
    b = 6;
	ft_ultimate_div_mod(&a, &b);
	nmr1[0] = '0' + a;
	nmr2[0] = '0' + b;

	write(1, &nmr1, 1);
	write(1, "\n", 1);
	write(1, &nmr2, 1);

	return (0);
}
*/