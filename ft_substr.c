/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:02:38 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/18 12:05:20 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new_str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	new_str = ft_calloc((len + 1), sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			new_str[j] = s[i];
			j++;
		}
		i++;
	}
	return (new_str);
}
/*
//Allocates memory (with malloc) and returns a substr from the string ’s’. The
//substr starts at index ’start’ and has a maximum lenght of ’len’.
#include <stdio.h>
int	main()
{
	char *str = "42_common_core";
	char *s1 = ft_substr(str, 0, 2);
	char *s2 = ft_substr(str, 20, 2);
	char *s3 = ft_substr(str, 10, 20);

	printf("Substr1: %s\n", s1);
	free(s1);
	printf("Substr2: %s\n", s2);
	free(s2);
	printf("Substr3: %s\n", s3);
	free(s3);
	return (0);
}
*/
