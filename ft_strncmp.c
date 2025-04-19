/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:25:53 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/16 16:57:16 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
//The strcmp() function compares the two strings s1 and s2. The locale is not
//taken into account. The comparison is done using unsigned characters. The
//strncmp() function is similar, except it compares only the first (at most) n
//bytes of s1 and s2.
#include <stdio.h>
int	main()
{
	printf("Retorna > 0 se s1 for maior, < 0 se menor, ou 0 se igual (n): %d\n",
			ft_strncmp("42_common_core", "42_common_core", 14));
	printf("Retorna > 0 se s1 for maior, < 0 se menor, ou 0 se igual (n): %d\n",
			ft_strncmp("42_common_core", "42_common", 15));
	printf("Retorna > 0 se s1 for maior, < 0 se menor, ou 0 se igual (n): %d\n",
			ft_strncmp("42_common_core", "42_common_core", 9));
	printf("Retorna > 0 se s1 for maior, < 0 se menor, ou 0 se igual (n): %d\n",
			ft_strncmp("42_common_core", "common_core", 11));
	printf("Retorna > 0 se s1 for maior, < 0 se menor, ou 0 se igual (n): %d\n",
			ft_strncmp("$\'201'", "A", 11));
	return (0);
}
*/
