/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:05:46 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/11/28 20:35:40 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long p)
{
	int	len;

	len = 0;
	if (!p)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	else
	{
		len += ft_putstr("0x");
		len += ft_puthex(p);
	}
	return (len);
}
