/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:20:16 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/14 18:01:33 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

/*
//Outputs the string ’s’ to the given file descriptor.
#include <fcntl.h>

int main(void)
{
	char	*s = "42_common_core";
	int		fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	
	if (fd == -1)
		return (1);
	ft_putstr_fd(s, fd);
	ft_putstr_fd("\n", fd);
	close(fd);
	return (0);
}
*/
