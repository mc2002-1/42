/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 01:52:46 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/09 16:05:37 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	check_minimum(int *tab, int min_index, int i)
{
	int	temp;

	if (min_index != i)
	{
		temp = tab[i];
		tab[i] = tab[min_index];
		tab[min_index] = temp;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	min_index;

	i = 0;
	while (i < size - 1)
	{
		min_index = i;
		f = i + 1;
		while (f < size)
		{
			if (tab[f] < tab[min_index])
			{
				min_index = f;
			}
			f++;
		}
		check_minimum(tab, min_index, i);
		i++;
	}
}
/*
int main ()
{
    int tab[5] = {3, 8, 3, 1, 7};
    char c;
    int m;

    m = 0;
    ft_sort_int_tab(tab, 5);
    while (m < 5)
    {
        c = '0' + tab[m];
        write (1, &c, 1);
        m++;
    }

    return 0;
}
*/
