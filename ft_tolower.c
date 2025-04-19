/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:29:26 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/16 14:50:57 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*
//If c is an uppercase letter, tolower() returns its lowercase equivalent, if a
//lowercase representation exists in the current locale. Otherwise, it returns c
#include <stdio.h>

int	main()
{
	printf("A letra A se torna: %c\n", ft_tolower('A'));
	printf("A letra Z se torna: %c\n", ft_tolower('Z'));
	printf("A letra a se torna: %c\n", ft_tolower('a'));
	printf("A letra z se torna: %c\n", ft_tolower('z'));
	return (0);
}
*/
