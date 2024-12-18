
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 02:16:09 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/10/07 02:16:52 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr2;

	i = 0;
	ptr2 = (unsigned char *)ptr;
	while (i < n)
	{
		ptr2[i] = (unsigned char) c;
		i++;
	}
	return (ptr);
}