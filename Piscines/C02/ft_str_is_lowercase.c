/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 04:11:57 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/09 16:12:29 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_str_is_lowercase(char *src)
{
	int	i;
	int	controlo;

	controlo = 1;
	i = 0;
	while (src[i] != '\0')
	{
		if ((src[i] >= 'a') && (src[i] <= 'z'))
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
/*
int main()
{
    char src[] = "auvfbMbfv";

    printf("Output: %d", ft_str_is_lowercase(src));

    return 0;
}
*/
