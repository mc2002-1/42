/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 02:07:21 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/10 02:09:48 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strlowcase(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if ((src[i] >= 65) && (src[i] <= 90))
		{
			src[i] = src[i] + 32;
		}
		i++;
	}
	return (src);
}

// int main()
// {
//     char src[] = "MigUeL";
//     ft_strlowcase(src);

//     printf("Output: %s", src);

//     return 0;
// }
