/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:02:29 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/07 14:03:47 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
//Checks for any printable character including space.
#include <stdio.h>
int	main()
{
	printf("Retorna 1 se for printavel: %d\n", ft_isprint('A'));
	printf("Retorna 1 se for printavel: %d\n", ft_isprint('0'));
	printf("Retorna 1 se for printavel: %d\n", ft_isprint(' '));
	printf("Retorna 1 se for printavel: %d\n", ft_isprint('\t'));
	printf("Retorna 1 se for printavel: %d\n", ft_isprint('\n'));
	return (0);
}
*/
