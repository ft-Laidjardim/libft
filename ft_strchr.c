/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:52:20 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/19 09:07:23 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
//The strchr() function returns a pointer to the first occurrence of the char c
//in the string s. The strchr() functions return a pointer to the matched char
//or NULL if the character is not found. The terminating null byte is considered
//part of the string so that if c is specified as '\0', these functions return a
//pointer to the terminator
#include <stdio.h>
int	main()
{
	printf("Retorna o ponteiro caso encontrado o char: %s\n",
			ft_strchr("42_common_core", 'e'));
	printf("Retorna o ponteiro caso encontrado o char: %s\n",
			ft_strchr("42_common_core", 'f'));
	printf("Retorna o ponteiro caso encontrado o char: %s\n",
			ft_strchr("42_common_core", '_'));
	printf("Retorna o ponteiro caso encontrado o char: %s\n",
			ft_strchr("42_common_core", ' '));
	printf("Retorna o ponteiro caso encontrado o char: %s\n",
			ft_strchr("42_common_core", '\0'));
	return (0);
}
*/
