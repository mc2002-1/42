/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 04:08:51 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/09 16:12:17 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_str_is_numeric(char *src)
{
	int	i;
	int	controlo;

	controlo = 1;
	i = 0;
	while (src[i] != '\0')
	{
		if (((src[i] >= '0') && (src[i] <= '9')))
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
    char src[] = "77a";

    printf("Output: %d", ft_str_is_numeric(src));

    return 0;
}
*/
