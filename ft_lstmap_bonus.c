/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:43:55 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/19 09:06:22 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	void	*content;
	t_list	*test;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		test = ft_lstnew(content);
		if (!test || !content)
		{
			del(content);
			free(test);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, test);
		lst = lst->next;
	}
	return (new_lst);
}
//Iterates the list ’lst’ and applies the function ’f’ on the content of each
//node. Creates a new list resulting of the successive applications of the
//function ’f’. The ’del’ function is used to delete the content of a node if
//needed.
