/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 01:23:08 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/06 10:45:21 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		i;
	int		f;
	char	digits[5];

	i = 0;
	while (i < 100)
	{
		f = i + 1;
		while (f < 100)
		{
			digits[0] = (i / 10) + '0';
			digits[1] = (i % 10) + '0';
			digits[2] = ' ';
			digits[3] = (f / 10) + '0';
			digits[4] = (f % 10) + '0';
			write(1, digits, 5);
			if (i != 98 || f != 99)
				write(1, ", ", 2);
			f++;
		}
		i++;
	}
}
/*
int main (){
    ft_print_comb2();
}*/