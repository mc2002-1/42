/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 03:49:27 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/09 16:11:56 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_str_is_alpha(char *src)
{
	int	i;
	int	controlo;

	controlo = 1;
	i = 0;
	while (src[i] != '\0')
	{
		if (((src[i] >= 'a') && (src[i] <= 'z')) || ((src[i] >= 'A')
				&& (src[i] <= 'Z')))
		{
			controlo = 1;
		}
		else
		{
			controlo = 0;
			break ;
		}
		i++;
	}
	return (controlo);
}

// int main()
// {
//     char src[] = "1";

//     printf("Output: %d", ft_str_is_alpha(src));

//     return 0;
// }
