/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 08:57:49 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/16 17:55:04 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;	

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = 0;
	if (size <= len_dst)
		return (size + len_src);
	while (src[i] && (len_dst + i) < size - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_src + len_dst);
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

	len = ft_strlcat(dest, s, 24);
	printf("%ld\n", len);
	printf("%s\n", dest);
}
*/
