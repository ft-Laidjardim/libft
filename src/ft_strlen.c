/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:40:29 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/07 14:40:43 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if(argc == 2)
		printf("%zu", ft_strlen(argv[1]));
	return (0);
}*/
