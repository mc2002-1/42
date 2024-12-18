/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 03:01:26 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/10/21 00:11:40 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*array;
	unsigned char	char_c;

	array = (unsigned char *) s;
	char_c = (unsigned char) c;
	if (n > 0)
	{
		while (n > 0)
		{
			if (*array == char_c)
				return ((void *) array);
			n--;
			array++;
		}
	}
	return ((void *) 0);
}