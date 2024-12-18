/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:46:44 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/10/21 00:32:39 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	c1;
	int		i; 

	if (s == NULL)
		return NULL;
	i = ft_strlen(s);
	c1 = (char) c;
	while (i >= 0)
	{
		if (s[i] == c1)
			return (s+i);
		i--;
	}
	return NULL;
}