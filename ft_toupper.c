/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:21:04 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/16 14:48:15 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
/*
//If c is a lowercase letter, toupper() returns its uppercase equivalent, if an
//uppercase representation exists in the current locale. Otherwise, it returns c
#include <stdio.h>
int	main()
{
	printf("A letra A se torna: %c\n", ft_toupper('A'));
	printf("A letra Z se torna: %c\n", ft_toupper('Z'));
	printf("A letra a se torna: %c\n", ft_toupper('a'));
	printf("A letra z se torna: %c\n", ft_toupper('z'));
	return (0);
}
*/
