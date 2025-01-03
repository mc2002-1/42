/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:14:06 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/09 17:04:39 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_str_is_printable(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if ((src[i] < 32) || (src[i] > 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main()
// {
//     char src[] = "\n";

//     printf("Output: %d", ft_str_is_printable(src));

//     return 0;
// }
