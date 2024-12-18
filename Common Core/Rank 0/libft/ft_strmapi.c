/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:48:51 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/10/15 17:51:54 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*new_str;
	unsigned int	i;

	if (s)
	{
		str = (char *)s;
		new_str = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
		if (new_str)
		{
			i = 0;
			while (str[i])
			{
				new_str[i] = (char)f(i, str[i]);
				i++;
			}
			new_str[i] = '\0';
			return (new_str);
		}
	}
	return (NULL);
}
