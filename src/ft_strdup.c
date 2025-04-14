/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:10:31 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/11 15:10:48 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*alloc_s;
	int		i;

	i = 0;
	alloc_s = malloc(sizeof(char) * (ft_strlen(s) + 1));
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
#include <stdio.h>
int	main()
{
	char *s1 = "abcde";
	char *s2 = ft_strdup(s1);

	printf("%s", s2);
	free(s2);
	return (0);
}*/
