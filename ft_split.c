/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 09:12:31 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/18 12:54:51 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*find_alloc_words(char const *s, char c, int *y)
{
	int		i;
	char	*word;
	int		j;

	j = 0;
	i = 0;
	word = NULL;
	while (s[i] == c)
		i++;
	if (s[i] != c && (i == 0 || s[i - 1] == c))
	{
		while (s[i + j] && s[i + j] != c)
			j++;
		word = ft_calloc((j + 1), sizeof(char));
		if (!word)
			return (NULL);
		j = 0;
		while (s[i + j] != c && s[i + j] != '\0')
		{
			word[j] = s[i + j];
			j++;
		}
	}
	*y = *y + i + j;
	return (word);
}

char	**free_alloc(char **array, int i)
{
	free (array[i]);
	free (array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		words;
	char	**split;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	i = 0;
	j = 0;
	split = ft_calloc((words + 1), sizeof(char *));
	if (!split)
		return (NULL);
	while (i < words)
	{
		split[i] = find_alloc_words(&s[j], c, &j);
		if (!split[i])
			return (free_alloc(split, i));
		i++;
	}
	split[i] = NULL;
	return (split);
}
/*
//The split function is the hardest one in this list, that's why I wrote down
//an explanation below. I wanted to make sure that I fixed the concepts and the
//logic before coding it and avoid future misconcepts.
//
//Allocates (with malloc) and returns an array of strings obtained by splitting
//’s’ using the char c as a delimiter. The array must end with a NULL pointer.
//
//Here we have to call four functions:
//	- ft_words: we will define how many words (tokens) we'll have;
//	- ft_strdup: we'll allocate the right amount of memory needed (malloc);
//	- ft_free: liberate the functions that didn't work properly;
//	- ft_split: the function that will return the array of strings organized
//
#include <stdio.h>
int	main()
{
	char	*s1 = "___42_common_core!";
	char	**w = ft_split(s1, '_');

	int i = 0;
	while (w[i])
	{
		printf("%s\n", w[i]);
		free(w[i]);
		i++;
	}
	free(w);
}
*/
