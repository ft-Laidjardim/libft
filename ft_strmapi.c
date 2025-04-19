/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:02:23 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/16 14:27:22 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		i;

	i = 0;
	new_str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!new_str)
		return (0);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
//Applies the function f to each character of the string s passing its index as
//the first argument and the character itself as the second. A new string is
//created (malloc) to collect the results from the successive applications of f
#include <stdio.h>
static char	ft_maximize(unsigned int i, char c)
{
	(void)i;
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}

int	main(void)
{
	char *s = "42_common_core";
	char *capitalized;

	capitalized = ft_strmapi(s, ft_maximize);
	printf("Original: %s\n", s);
	printf("Capitalized: %s\n", capitalized);
	free(capitalized);
	return (0);
}
*/
