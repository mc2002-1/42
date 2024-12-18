/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 00:54:08 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/09 01:51:47 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	temp;

	i = 0;
	f = size - 1;
	while (i < f)
	{
		temp = tab[i];
		tab[i] = tab[f];
		tab[f] = temp;
		i++;
		f--;
	}
}
/*
int main ()
{
    int tab[4] = {0, 1, 2, 3};
    char c;
    int m;

    m = 0;
    ft_rev_int_tab(tab, 4);
    while (m < 4)
    {
        c = '0' + tab[m];
        write (1, &c, 1);
        m++;
    }

    return 0;
}
*/