/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:06:48 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/08 14:21:38 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*t;

	t = s;
	i = 0;
	while (i < n)
	{
		t[i] = c;
		i++;
	}
	return (s);
}
/*
//The memset() function fills the first n bytes of the memory area pointed to by
//s with the constant byte c. The memset() function returns a pointer to the
//memory area s.
#include <stdio.h>

int main ()
{
	char	c1[] = "42_common_core";

	ft_memset(c1, 'c', 2);
	printf("A copia para d: %s\n", c1);

	ft_memset(c1, 'c', 4);
	printf("A copia para d: %s\n", c1);

	return(0);
}
*/
