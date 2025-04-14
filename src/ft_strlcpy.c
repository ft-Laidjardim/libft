/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:45:22 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/11 15:08:54 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (src[i] && i < size - 1)
	{
		if (src[i])
		{
			dst[i] = src[i];
		}
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>

int	main()
{
	char *l = "AAAAAAA";
	char j[10];

	int k = strlcpy(j, l, 20);
	printf("%d", (int)ft_strlcpy(j, l, 20));
	printf("%d", k);	
	return(0);
}*/
