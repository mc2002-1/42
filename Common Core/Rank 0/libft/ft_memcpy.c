/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 02:30:48 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/10/21 00:08:19 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*array_src;
	unsigned char		*array_dest;

	i = 0;
	array_src = (unsigned char *) src;
	array_dest = (unsigned char *) dest;
	while (i < n)
	{
		array_dest[i] = array_src[i];
		i++;
	}
	return (dest);
}
