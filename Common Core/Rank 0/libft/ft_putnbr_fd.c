/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:02:33 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/10/15 18:05:56 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        ft_putstr_fd("-2147483648", fd);
    else if (n < 0)
    {
        ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
    }
    else
    {
        while (n != 0)
        {
            ft_putchar_fd('0' + n % 10, fd);
            n /= 10;
        }    
    }
}