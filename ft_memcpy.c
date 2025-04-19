/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:41:14 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/17 14:33:45 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *) src;
	d = dest;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
//The memcpy() function copies n bytes from memory area src to memory area dest
//The memory areas must not overlap. Use memmove if the memory areas do overlap
//The memcpy() function returns a pointer to dest
#include <stdio.h>

int main ()
{
	char 		d[15];
	const char	c1[] = "42_common_core";
	const char	c2[] = "42";

	ft_memcpy(d, c1, sizeof(c1));
	printf("A copia para d: %s\n", d);

	ft_memcpy(d, 0, sizeof(c1)); //seg fault >.<
	printf("A copia para d: %s\n", d);
	
	ft_memcpy(d, c1, 5);
	printf("A copia para d: %s\n", d);

	//ft_memcpy(d, c1, 40); //core dump :D
	//printf("A copia para d: %s\n", d);

	ft_memcpy(d, c2, 3);
	//d[3] = '\0';
	printf("A copia para d: %s\n", d);

	return(0);
}
*/
