/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:15:40 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/11/28 23:16:08 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long p)
{
	char	*base;
	char	converted[20];
	int		len;
	int 	f;

	f = 0;
	base = "0123456789abcdef";
	if (p == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (p != 0)
	{
		converted[f] = base[p % 16];
		p /= 16;
		f++;
	}
	len = f;
	while (f > 0)
	{
		write(1, &converted[f - 1], 1);
		f--;
	}
	return (len);
}