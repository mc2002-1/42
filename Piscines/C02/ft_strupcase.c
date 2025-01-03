/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:08:26 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/09 17:13:05 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strupcase(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if ((src[i] >= 97) && (src[i] <= 122))
		{
			src[i] = src[i] - 32;
		}
		i++;
	}
	return (src);
}

// int main()
// {
//     char src[] = "MigUeL";
//     ft_strupcase(src);

//     printf("Output: %s", src);

//     return 0;
// }
