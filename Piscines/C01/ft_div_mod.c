/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 22:26:03 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/08 22:27:24 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int		div;
	int		mod;
	char	nmr1[1];
	char	nmr2[1];

	ft_div_mod(50, 6, &div, &mod);
	nmr1[0] = '0' + div;
	nmr2[0] = '0' + mod;

	write(1, &nmr1, 1);
	write(1, "\n", 1);
	write(1, &nmr2, 1);

	return (0);
}
*/
