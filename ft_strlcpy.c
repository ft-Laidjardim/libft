/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:45:22 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/15 17:46:44 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
//Copy and catenate the input str into a destination str. If the destination
//buffer, limited by its size, isnt large enough to hold the copy, the resulting
//string is truncated (but its guaranteed to be null-terminated). They return
//the length of the total string they tried to create.
#include <stdio.h>
int main ()
{
	size_t	len;
	const char	s[15] = "42_common_core";
	char	dest[30] = "lets go: ";

	len = ft_strlcpy(dest, s, 15);
	printf("%ld\n", len);
	printf("%s\n", dest);
}
*/
