/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:51:49 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/16 11:02:22 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				count;
	unsigned int	n_absolut;

	n_absolut = n;
	count = count_digits(n);
	str = ft_calloc((count + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		return (*str = '0', str);
	if (n < 0)
	{
		str[0] = '-';
		n_absolut = -n;
	}
	while (n_absolut)
	{
		str[count -1] = (n_absolut % 10) + 48;
		n_absolut = n_absolut / 10;
		count--;
	}
	return (str);
}
/*
//Allocates with malloc and returns a string representing the integer received
//as an argument. Negative numbers must be handled.
#include <stdio.h>

int	main()
{
	int		test[] = {-2147483648, -42, 0, 1234, 2147483647};
	char	*s;
	int		i = 0;

	while (i < 5)
	{
		s = ft_itoa(test[i]);
		printf("ft_itoa(%d) becomes: \"%s\"\n", test[i], s);
		free(s);
		i++;
	}
	return (0);
}
*/
