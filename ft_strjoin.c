/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:27:57 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/17 09:46:32 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		len2;
	int		len1;

	len2 = ft_strlen(s2);
	len1 = ft_strlen(s1);
	new_str = ft_calloc(((len1 + len2) + 1), sizeof(char));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, len1 + 1);
	ft_strlcat(new_str, s2, (len1 + len2) + 1);
	return (new_str);
}
/*
//Allocates (with malloc) and returns a new string, which is the result of the
//concatenation of ’s1’ and ’s2’.
#include <stdio.h>

int	main()
{
	char	*s;
	char	*s1 = "42_com";
	char	*s2 = "mon_core";
	char	*s3 = "club de regatas ";
	char	*s4 = "vasco da gama";

	s = ft_strjoin(s1, s2);
	printf("%s\n", s);
	free(s);
	s = ft_strjoin(s3, s4);
	printf("%s\n", s);
	free(s);
	return (0);
}
*/
