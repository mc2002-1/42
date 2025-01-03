/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 04:28:38 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/09/26 09:33:02 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	aux(int size, char **strs, char *sep, int *size_total)
{
	int	j;
	int	i;
	int	size_sep;

	size_sep = 0;
	j = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			(*size_total)++;
			i++;
		}
		j++;
	}
	i = 0;
	while (sep[i])
	{
		size_sep++;
		i++;
	}
	return (size_sep);
}

void	aux1(int size, char **strs, char *strs_joined, char *sep)
{
	int		i;
	int		j;
	char	*start_sep;

	start_sep = sep;
	j = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			*strs_joined = strs[j][i];
			i++;
			strs_joined++;
		}
		if (j < size - 1)
		{
			while (*sep)
				*strs_joined++ = *sep++;
			sep = start_sep;
		}
		j++;
	}
	*strs_joined = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strs_joined;
	char	*start;
	int		size_total;
	int		size_sep;
	int		total_size;

	size_total = 0;
	if (size == 0)
	{
		strs_joined = (char *)malloc(1 * sizeof(char));
		if (strs_joined)
			strs_joined[0] = '\0';
		return (strs_joined);
	}
	size_sep = aux(size, strs, sep, &size_total);
	total_size = (size_total + (size - 1) * size_sep + 1);
	strs_joined = (char *)malloc(total_size * sizeof(char));
	if (!strs_joined)
		return (NULL);
	//start = strs_joined;
	aux1(size, strs, strs_joined, sep);
	return (strs_joined);
}

int main()
{
    char *strs1[] = {"Hello", "world", "!"};
    char *sep1 = ", ";
    char *result1 = ft_strjoin(3, strs1, sep1);

    if (result1)
    {
        printf("Test 1: %s\n", result1);
        free(result1);
    }
    else
	{
        printf("Test 1: Memory allocation failed.\n");
	}

	//char *strs2[] = {NULL, "world", "!"};


    char *result2 = ft_strjoin(0, NULL, sep1);
    
    if (result2)
    {
        printf("Test 2: %s (expected empty string)\n", result2);
        free(result2);
    }
    else
        printf("Test 2: Memory allocation failed.\n");

    char *strs3[] = {"Solo"};
    char *sep3 = "-";
    char *result3 = ft_strjoin(1, strs3, sep3);
    
    if (result3)
    {
        printf("Test 3: %s (expected 'Solo')\n", result3);
        free(result3);
    }
    else
        printf("Test 3: Memory allocation failed.\n");
    return 0;
}

