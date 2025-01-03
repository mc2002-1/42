/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 03:35:10 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/13 12:28:29 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	buffer[4];
	char	*hex;
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
		{
			buffer[0] = '\\';
			buffer[1] = hex[(unsigned char)str[i] / 16];
			buffer[2] = hex[(unsigned char)str[i] % 16];
			buffer[3] = '\0';
			write(1, buffer, 3);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

// int main()
// {
//     char str[] = "bruhh";

//     ft_putstr_non_printable(str);
//     return 0;
// }