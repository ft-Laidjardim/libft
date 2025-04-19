/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manisalnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:39:55 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/07 13:42:26 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
//Checks for an alphanumeric character; it is  equivalent to:
//	(isalpha(c) || isdigit(c))
#include <stdio.h>
int	main()
{
	printf("Retorna 1 se for alfa-numerico: %d\n", ft_isalnum('A'));
	printf("Retorna 1 se for alfa-numerico: %d\n", ft_isalnum('0'));
	printf("Retorna 1 se for alfa-numerico: %d\n", ft_isalnum(' '));
	return (0);
}
*/
