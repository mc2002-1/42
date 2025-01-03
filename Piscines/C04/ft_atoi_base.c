/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 04:45:08 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/26 04:16:25 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	auxiliar(int c, int *aux, int base_len)
{
	int	m;

	m = 0;
	while (m < c)
	{
		*aux = *aux * base_len;
		m++;
	}
}

int	base2int(char *str, char *base, int base_len, int str_length)
{
	int	f;
	int	nmr;
	int	aux;
	int	c;

	c = 0;
	nmr = 0;
	str = str + str_length - 1;
	while (*str != '+' && *str != '-' && *str != ' ' && *str != '\0')
	{
		f = 0;
		while (f < base_len && *str != base[f])
			f++;
		if (f == base_len)
			return (-1);
		aux = 1;
		auxiliar(c, &aux, base_len);
		nmr = nmr + f * aux;
		str--;
		c++;
	}
	return (nmr);
}

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

char	*ft_semi_atoi(char *str, int *signal)
{
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*signal = *signal * (-1);
		str++;
	}
	return (str);
}

int	ft_atoi_base(char *str, char *base)
{
	int		base_len;
	int		str_length;
	int		signal;
	char	*p;
	int		nmr_final;

	signal = 1;
	str_length = 0;
	p = ft_semi_atoi(str, &signal);
	if (is_base_valid(base, &base_len) == -1)
		return (0);
	while (p[str_length] != '\0')
		str_length++;
	nmr_final = base2int(p, base, base_len, str_length);
	if (signal == -1)
		nmr_final = nmr_final * (-1);
	return (nmr_final);
}

int main()
{
    char str[] = "      ---14353";
    char base[] = "0123456789";

    printf("%i\n", ft_atoi_base(str, base));
    return (0);
}

