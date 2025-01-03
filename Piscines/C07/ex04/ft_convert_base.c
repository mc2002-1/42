/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 23:11:37 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/26 07:05:23 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_putnbr_base(int nbr, char *base);
int		is_base_valid(char *base, int *base_len);

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
	while (p[str_length] != '\0' && p[str_length] != ' '
		&& p[str_length] != '+' && p[str_length] != '-')
		str_length++;
	nmr_final = base2int(p, base, base_len, str_length);
	if (signal == -1)
		nmr_final = nmr_final * (-1);
	return (nmr_final);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	base_from_length;
	int	base_to_length;
	int	nmr;

	base_from_length = 0;
	base_to_length = 0;
	if (is_base_valid(base_from, &base_from_length) == -1
		|| is_base_valid(base_to, &base_to_length) == -1)
		return (NULL);
	nmr = ft_atoi_base(nbr, base_from);
	return (ft_putnbr_base(nmr, base_to));
}
/*
int main()
{
    char *nbr = "-013 ";
    char *base_from = "0123456789";
    char *base_to = "0123456";

    char *result = ft_convert_base(nbr, base_from, base_to);
    if (result)
    {
        printf("%s\n", result);
        free(result); 
    }
    return 0;
}
*/
