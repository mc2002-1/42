/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 02:37:26 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/10/21 00:08:22 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*array_src;
	unsigned char	*array_dest;

	i = 0;
	array_src = (unsigned char *) src;
	array_dest = (unsigned char *) dest;
	if (array_dest > array_src)
	{
		
		while (n > 0)
		{
			array_dest[n-1] = array_src[n-1];
			n--;
		}
	}
	else 
	{
		while (i < n)
		{
			array_dest[i] = array_src[i];
			i++;
		}
		
	}
	return (dest);
}