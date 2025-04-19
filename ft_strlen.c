/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:40:29 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/07 14:40:43 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}
/*
//The strlen() function calculates the length of the string pointed to by s,
//excluding the terminating null byte ('\0'). The strlen() function returns the
//number of bytes in the string pointed to by s.
#include <stdio.h>
int	main()
{
	printf("O tamanho da string \"42_common_core\" e: %d.\n", 
			ft_strlen("42_common_core"));
	printf("O tamanho da string \"S2 cafe com bolo\" e: %d.\n", 
			ft_strlen("bolo"));
	return (0);
}
*/
