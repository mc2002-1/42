/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:54:51 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/10/21 00:09:33 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	const char	*start;
	const char	*p1;
	const char	*p2;

	if (*to_find == '\0')
		return ((char *)str);

	while (*str != '\0' && len > 0)
	{
		if (*str == *to_find)
		{
			start = str;
			p1 = str;
			p2 = to_find;
			while (*p1 == *p2 && *p2 != '\0' && (size_t)(p1 - str) < len)
			{
				p1++;
				p2++;
			}
			if (*p2 == '\0')
				return ((char *)start);
		}
		len--;
		str++;
	}
	return (NULL);
}

