/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 04:05:45 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/10/21 00:25:30 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	char	c1;

	if (s == NULL)
		return NULL;
	c1 = (char) c;
	while (*s)
	{
		if (*s == c1)
			return (s);
		s++;
	}
	if (c1 == '\0')
		return (s);
	return NULL;
}