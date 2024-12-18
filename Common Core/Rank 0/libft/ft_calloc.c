/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:10:20 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/10/07 19:16:08 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*array;

	array = (void *)malloc (nelem * elsize);
	if (array)
	{
		ft_memset(array, 0, nelem * elsize);
		return (array);
	}
	return (NULL);
}