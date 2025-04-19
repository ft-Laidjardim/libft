/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:51:49 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/19 09:11:13 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*st;
	int		i;

	st = (char *)s;
	i = 0;
	while (st[i])
		i++;
	while (i > 0 && st[i] != (unsigned char)c)
		i--;
	if ((unsigned char)st[i] == (unsigned char)c)
		return (&st[i]);
	return (NULL);
}
/*
//The strrchr() function returns a pointer to the last occurrence of the char c
//in the string s. The strrchr() function return a pointer to the matched char
//or NULL if the character is not found. The terminating null byte is considered
//part of the string, so that if c is specified as '\0', these functions return
//a pointer to the terminator.
#include <stdio.h>
int	main()
{
	printf("Retorna o char em \"reverse\": %s\n",
		ft_strrchr("42_common_core", (int)'c'));
	printf("Retorna o char em \"reverse\": %s\n",
		ft_strrchr("42_common_core", (int)'4'));
	printf("Retorna o char em \"reverse\": %s\n",
		ft_strrchr("42_common_core", (int)' '));
	return (0);
}
*/
