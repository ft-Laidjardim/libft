/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:28:10 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/16 10:53:12 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
	ft_putchar_fd('\n', fd);
}

/*
//Outputs the string ’s’ to the given file descriptor followed by a newline
#include <fcntl.h>
int main(void)
{
	char	*s = "42_common_core";
	int		fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	
	if (fd == -1)
		return (1);
	ft_putendl_fd(s, fd);
	close(fd);
	return (0);
}
*/
