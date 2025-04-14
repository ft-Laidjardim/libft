/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 08:57:49 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/11 15:11:38 by ljessica         ###   ########.fr       */
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
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char src[]= "lorem";
	char dst[] = "aaaaaaaaaa";
	char s[]= "lorem";
	char d[] = "aaaaaaaaaa";

	printf("%zu\n", strlcat(d, s, 14));
	printf("%zu\n", ft_strlcat(dst, src, 14));
	printf("%s\n", d);
	printf("%s", dst);
}*/
