/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 21:17:03 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/05 19:10:42 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	write(1, &"P\nN\n"[2 * (n < 0)], 1);
}

/*
int	main(void)
{
	ft_is_negative(-2);
	ft_is_negative(0);
	ft_is_negative(77);
	return (0);
}
*/