/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:03:49 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/16 12:17:40 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*c;

	if (nmemb > SIZE_MAX / size)
		return (NULL);
	c = malloc(nmemb * size);
	if (!c)
		return (NULL);
	ft_bzero(c, nmemb * size);
	return (c);
}
/*
//The calloc() function allocates memory for an array of nmemb elements of size
//bytes each and returns a pointer to the allocated memory. The memory is set
//to zero. If nmemb or size is 0, then calloc() returns a unique pointer value
//that can later be successfully passed to free(). If the multiplication of
//nmemb & size would result in integer overflow then calloc() returns an error.
//By contrast, an integer overflow would not be detected in the following call
//to malloc(), with the result that an incorrectly sized block of memory would
//be allocated: malloc(nmemb * size);
*/
