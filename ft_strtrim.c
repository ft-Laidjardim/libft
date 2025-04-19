/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:07:37 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/17 18:31:47 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		else
			i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new_str;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_calloc(1, 1));
	start = 0;
	end = (ft_strlen(s1) -1);
	while (s1[start] && in_set(s1[start], set))
		start++;
	while (end > 0 && in_set(s1[end], set))
		end--;
	if (start > end)
		return (ft_calloc(1, 1));
	new_str = ft_calloc((end - start + 2), sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (start <= end)
		new_str[i++] = s1[start++];
	return (new_str);
}
/*
//Allocates with malloc and returns a copy of s1 with the characters specified
//in ’set’ removed from the beginning and the end of the string.
#include <stdio.h>

int	main()
{
	char 	*s1 = "*__*####42_*#common#*_core####*__*";
	char 	*set = "_#*";
	char 	*s;

	s = ft_strtrim(s1, set);
	printf("%s\n", s);
	free(s);
	return(0);
}
*/
