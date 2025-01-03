/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 04:59:00 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/22 08:02:35 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	length;
	int	i;

	i = 0;
	length = 0;
	(void) argc;
	while (argv[0][length])
	{
		length++;
	}
	write (1, argv[0], length);
	write(1, "\n", 1);
	return (0);
}
