/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:04:38 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/17 18:37:51 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	d = dest;
	s = src;
	i = n;
	if (!dest && !src)
		return (NULL);
	if (d > s)
	{
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
	{
		i = -1;
		while (++i < n)
			d[i] = s[i];
	}
	return (d);
}

/*
//The memmove function copies n bytes from memory area src to memory area dest.
//The memory areas may overlap: copying takes place as though the bytes in src
//are first copied into a temporary array that does not overlap src or dest, and
//the bytes are then copied from the temporary array to dest.
//The memmove() function returns a pointer to dest.
#include <stdio.h>

int main ()
{
	char	d[] = "42_common_core";
	char	c1[16];
	char	c2[9];

	ft_memmove(c1, d, 15);
	printf("A copia para d: %s\n", c1);

	//nao funciona de maneira adequada por sobreposicao de memoria:
	ft_memmove(c2, d, 15);
	printf("A copia para d: %s\n", c2);

	return(0);
}
*/
