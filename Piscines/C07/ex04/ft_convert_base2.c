/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 23:11:18 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/26 03:42:08 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_base_valid(char *base, int *base_len)
{
	int	char_set[256];
	int	i;
	int	f;

	f = 0;
	i = 0;
	while (f < 256)
	{
		char_set[f] = 0;
		f++;
	}
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (-1);
		if (char_set[(unsigned char)base[i]] == 1)
			return (-1);
		char_set[(unsigned char)base[i]] = 1;
		i++;
	}
	if (i < 2)
		return (-1);
	*base_len = i;
	return (0);
}

void	aux(int *n, char *base, char *signal, char **base_converted)
{
	if (*n == 0)
	{
		*base_converted = (char *)malloc(2 * sizeof(char));
		(*base_converted)[0] = base[0];
		(*base_converted)[1] = '\0';
	}
	else if (*n < 0)
	{
		*signal = '-';
		*n = *n * (-1);
	}
}

char	*aux2(int *f, char *converted, char *signal)
{
	char	*base_converted;
	int		i;

	i = 0;
	base_converted = (char *)malloc(34 * sizeof(char));
	if (!base_converted)
		return (NULL);
	if (*signal)
	{
		base_converted[0] = *signal;
		i++;
	}
	while (*f > 0)
	{
		base_converted[i] = converted[*f - 1];
		(*f)--;
		i++;
	}
	base_converted[i] = '\0';
	return (base_converted);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		f;
	char	converted[34];
	char	signal;
	char	*base_converted;

	signal = 0;
	f = 0;
	i = 0;
	while (base[i])
		i++;
	aux(&nbr, base, &signal, &base_converted);
	if (*base_converted != '\0'
		&& *base_converted != '-' && *base_converted != ' ')
		return (base_converted);
	while (nbr != 0)
	{
		converted[f] = base[nbr % i];
		nbr /= i;
		f++;
	}
	return (aux2(&f, converted, &signal));
}
