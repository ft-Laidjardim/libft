/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:10:31 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/14 16:25:13 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*alloc_s;
	int		i;

	i = 0;
	alloc_s = ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (alloc_s == 0 || s == 0)
		return (0);
	while (s[i])
	{
		alloc_s[i] = s[i];
		i++;
	}
	alloc_s[i] = '\0';
	return (alloc_s);
}
/*
//The strdup() function returns a pointer to a new string which is a duplicate
//of the string s. Memory for the new string is obtained with malloc(3), and can
//be freed with free(3).
#include <stdio.h>
int	main()
{
	const char	*s1 = "42_common_core";
	char		*s2;

	s2 = ft_strdup(s1);
	printf("Segue a str duplicada: %s\n", s2);
	free(s2);
	return (0);
}
*/
