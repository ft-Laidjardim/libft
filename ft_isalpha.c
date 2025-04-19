/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:29:05 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/07 10:35:48 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
/*
//Checks for an alphabetic char; in the standard C locale, it is equivalent to:
//	(isupper(c)  ||  islower(c))
#include <stdio.h>
int	main()
{
	printf("Retorna 1 se for alfabetico: %d\n", ft_isalpha('A'));
	printf("Retorna 1 se for alfabetico: %d\n", ft_isalpha('z'));
	printf("Retorna 1 se for alfabetico: %d\n", ft_isalpha('0'));
	printf("Retorna 1 se for alfabetico: %d\n", ft_isalpha(' '));
	return (0);
}
*/
