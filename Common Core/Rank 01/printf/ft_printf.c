/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:49:55 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/11/28 23:15:51 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char *str)
{
	int	len;
	
	len = 0;
	if (*str == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (*str == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (*str == 'p')
		len += ft_putpointer(va_arg(args, unsigned long));
	else if (*str == 'i' || *str == 'd')
		len += ft_putstr(ft_itoa(va_arg(args, int)));
	else if (*str == 'u')
		len += ft_putunsigned(va_arg(args, unsigned int));
	else if (*str == 'x' || *str == 'X')
		len += ft_puthex(va_arg(args, unsigned int));
	else if (*str == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int	len;
	va_list	args;

	len = 0;
	va_start (args, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			len += ft_format(args, str + 1);
			str++;
		}
		else
			len += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (len);
}