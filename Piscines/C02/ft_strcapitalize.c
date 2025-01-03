/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 02:10:47 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/12 18:19:18 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
char	*ft_strcapitalize(char *str)
{
	int		i;
	int		new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!new_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			new_word = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			new_word = 0;
		else
			new_word = 1;
		i++;
	}
	return (str);
}

// int main()
// {
//     char src[] = "miGUeL o rEi";
//     ft_strcapitalize(src);

//     printf("Output: %s", src);

//     return 0;
// }
