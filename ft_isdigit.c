/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:14:33 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/07 12:14:45 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
/*
//Checks for a digit (0 through 9).
#include <stdio.h>
int	main()
{
	printf("Retorna 1 se for digito: %d\n", ft_isdigit('A'));
	printf("Retorna 1 se for digito: %d\n", ft_isdigit('0'));
	printf("Retorna 1 se for digito: %d\n", ft_isdigit(0));
	printf("Retorna 1 se for digito: %d\n", ft_isdigit(' '));
	return (0);
}
*/
