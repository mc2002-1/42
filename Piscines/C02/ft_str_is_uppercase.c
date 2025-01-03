/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 04:15:25 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/09 16:13:06 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_str_is_uppercase(char *src)
{
	int	i;
	int	controlo;

	controlo = 1;
	i = 0;
	while (src[i] != '\0')
	{
		if ((src[i] >= 'A') && (src[i] <= 'Z'))
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
    char src[] = "BRUHHHHH";

    printf("Output: %d", ft_str_is_uppercase(src));

    return 0;
}
*/
