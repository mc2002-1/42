/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:16:44 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/10/21 00:22:18 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_delimiter(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(const char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_delimiter(*str, charset))
			str++;
		if (*str && !is_delimiter(*str, charset))
		{
			count++;
			while (*str && !is_delimiter(*str, charset))
				str++;
		}
	}
	return (count);
}

char	*copy_word(const char *str, char *charset)
{
	char	*word;
	int		length;

	length = 0;
	while (str[length] && !is_delimiter(str[length], charset))
		length++;
	word = (char *)malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);
	length = 0;
	while (*str && !is_delimiter(*str, charset))
		word[length++] = *str++;
	word[length] = '\0';
	return (word);
}

char	**ft_split(const char *str, char *charset)
{
	char	**result;
	int		words;
	int		i;

	i = 0;
	words = count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	while (*str)
	{
		while (*str && is_delimiter(*str, charset))
			str++;
		if (*str && !is_delimiter(*str, charset))
		{
			result[i] = copy_word(str, charset);
			if (!result[i])
				return (NULL);
			i++;
			while (*str && !is_delimiter(*str, charset))
				str++;
		}
	}
	result[i] = NULL;
	return (result);
}
