/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 03:08:07 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/10/21 00:08:09 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned char	*array_s1;
	unsigned char	*array_s2;
	unsigned int	i;

	i = 0;
	array_s1 = (unsigned char *) s1;
	array_s2 = (unsigned char *) s2;
	if (n > 0)
	{
		while (i < n)
		{
			if ((*array_s1 - *array_s2) != 0)
				return (*array_s1 - *array_s2);
			array_s1++;
			array_s2++;
			i++;
		}
	}
	return (*array_s1 - *array_s2);
}