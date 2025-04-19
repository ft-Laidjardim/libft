/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:15:11 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/16 14:01:47 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}
/*
//Applies the function ’f’ on each character of the string passed as argument,
//passing its index as first argument. Each character is passed by address to
//’f’ to be modified if necessary.
#include <stdio.h>

static void	ft_maximize(unsigned int i, char *c)
{
	(void)i;
	if (*c > 96 && *c < 123)
		*c -= 32;
	return ;
}

int	main(void)
{
	char s[] = "42_coMmon_core";

	ft_striteri(s, ft_maximize);
	printf("Capitalized: %s\n", s);
	return (0);
}
*/
