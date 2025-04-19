/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:41:19 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/16 17:55:22 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;

	ss = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (ss[i] == (unsigned char)c)
			return (&ss[i]);
		i++;
	}
	return (NULL);
}
/*
//The memchr() function scans the initial n bytes of the memory area pointed to
//by s for the first instance of c. Both c and the bytes of the memory area
//pointed to by s are interpreted as unsigned char. The  memchr() function
//return a pointer to the matching byte or NULL if the character does not occur
//in the given memory area.
#include <stdio.h>
int main () {
   const char str[] = "42_common_core";
   const char c1 = 'c';
   char *r;

   r = ft_memchr(str, c1, 4);
   printf("A procura por %c e: %s\n", c1, r);
   r = ft_memchr(str, c1, 2);
   printf("A procura por %c e: %s\n", c1, r);

   return(0);
}
*/
