/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:26:46 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/16 10:13:09 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	long	result;
	int		is_neg;

	i = 0;
	is_neg = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		{
			is_neg = is_neg * -1;
		}
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return ((int)(result * is_neg));
}
/*
//The atoi() function converts the initial portion of the string pointed to by
//nptr to int. The atoi() function does not detect errors.
//Returns the converted value or 0 on error.
#include <stdio.h>

int	main()
{
	const char *c = "      -455";
	int				s;

	s = ft_atoi(c);
	printf("%d\n", s);
	return (0);
}
*/
