/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:34:32 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/08 12:34:35 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*t;

	i = 0;
	t = s;
	while (i < n)
	{
		t[i] = '\0';
		i++;
	}
}
/*
//The bzero() function erases the data in the n bytes of the memory starting at
//the location pointed to by s by writing zeros (bytes with '\0') to that area.
#include <stdio.h>

int main ()
{
	int		i;
	char	c1[] = "42_common_core";

	i = 0;
	while (c1[i])
		i++;

// test with 2 chars
	ft_bzero(c1, 2);
	for (int j = 0; j < i; j++)
    {
		printf("%c", c1[j]);
	}
	printf("%c", '\n');

// test with 4 chars
	ft_bzero(c1, 4);
	for (int j = 0; j < i; j++)
    {
		printf("%c", c1[j]);
	}
	printf("%c", '\n');

	return(0);
}
*/
