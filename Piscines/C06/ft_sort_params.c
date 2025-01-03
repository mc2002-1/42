/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 05:16:33 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/22 08:03:23 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aux(char *argv[], int argc, int *z, int *i)
{
	int		f;
	char	*temp;

	while (*z < argc)
	{
		f = 0;
		while (argv[*i][f] != '\0' && argv[*z][f] != '\0')
		{
			if ((argv[*i][f] - argv[*z][f]) != 0)
			{
				if ((argv[*i][f] - argv[*z][f]) > 0)
				{
					temp = argv[*i];
					argv[*i] = argv[*z];
					argv[*z] = temp;
					break ;
				}
				else
					break ;
			}
			f++;
		}
		(*z)++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		f;
	int		z;

	i = 1;
	while (i < argc)
	{
		z = i + 1;
		aux(argv, argc, &z, &i);
		i++;
	}
	i = 1;
	while (i < argc)
	{
		f = 0;
		while (argv[i][f] != '\0')
		{
			write(1, &argv[i][f], 1);
			f++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
