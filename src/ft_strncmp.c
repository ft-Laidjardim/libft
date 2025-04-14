/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:25:53 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/11 15:59:51 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return(s1[i] - s2[i]);
}

#include <stdio.h>
int	main(void)
{
	char lj1[] = "";
	char lj2[] = "AABAAAAAAA";

	printf("%d", ft_strncmp(lj1, lj2, 13));
	printf("%d", strncmp(lj1, lj2, 13));
	return (0);
}
