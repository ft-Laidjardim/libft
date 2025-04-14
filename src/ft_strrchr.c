/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:51:49 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/08 11:39:01 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*st;
	int		i;

	st = (char *)s;
	i = 0;
	while (st[i])
		i++;
	while (i > 0 && st[i] != c)
		i--;
	if (st[i] == c)
		return (&st[i]);
	return (NULL);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if(argc == 3)
		printf("%s", ft_strrchr(argv[1], argv[2][0]));
	return (0);
}*/
