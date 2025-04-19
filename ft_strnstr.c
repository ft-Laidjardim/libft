/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:46:40 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/17 18:41:28 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ll;
	size_t	lb;

	lb = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[lb] && lb < len)
	{
		ll = 0;
		while (little[ll] && big[lb + ll]
			&& (lb + ll) < len && big[lb + ll] == little[ll])
			ll++;
		if (little[ll] == '\0')
			return ((char *) &big[lb]);
		lb++;
	}
	return (NULL);
}
/*
//The strstr function finds the first occurrence of the substring needle in
//the string haystack. The terminating null bytes ('\0') are not compared.
#include <stdio.h>
int	main()
{
	printf("Retorna a substr caso existir: %s\n",
		ft_strnstr("42_common_core", "mon", 9));
	printf("Retorna a substr caso existir: %s\n",
		ft_strnstr("42_common_core", "commom", 9));
	printf("Retorna a substr caso existir: %s\n",
		ft_strnstr("42_common_core", "c", 4));
	return (0);
}
*/
