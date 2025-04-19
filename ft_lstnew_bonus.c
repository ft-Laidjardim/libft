/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 10:44:48 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/18 12:04:41 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = ft_calloc(1, sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
#include <stdio.h>

int main()  
{
	char *str = "Zedro";
	t_list *strlist = NULL;
	strlist = ft_lstnew(str);
	printf("%s\n",(char *)strlist->content);

	int nbr = 42;
	t_list *intlist = NULL;
	intlist = ft_lstnew(&nbr);
	printf("%d\n", *(int *)intlist->content);

	free (intlist);
	free (strlist);

	return (0);
}*/
//Allocates (with malloc) and returns a new node. The member variable ’content’
//is initialized with the value of the parameter ’content’. The variable ’next’
//is initialized to NULL.
