/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:24:45 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/09 14:18:35 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*a1;
	const char	*a2;

	a1 = s1;
	a2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && a1[i] == a2[i])
		i++;
	return (a1[i] - a2[i]);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_memcmp("aaaada", "aaaaaa", 4));
}*/
