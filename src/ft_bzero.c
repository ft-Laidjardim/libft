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
#include <stdio.h>
int	main(void)
{
	int i = 0;
	char l[]= "abcdefg";
	ft_bzero(l, 8);
	while (i < 10)
	{
		printf("%d", l[i]);
		i++;
	}
}*/
