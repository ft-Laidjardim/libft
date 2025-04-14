/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:52:20 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/07 17:53:14 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main(void)
{
	char l[]= "abcxdef";
	char *s = ft_strchr(l, 'x');
	printf("%s", s);
	
	puts(ft_char(l, 'c'));
	return (0);
}*/
