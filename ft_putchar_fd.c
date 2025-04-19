/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:55:42 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/14 18:01:54 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
//Outputs the character ’c’ to the given file descriptor
#include <fcntl.h>

int main(void)
{
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		return (1);
	
	ft_putchar_fd('4', fd);
	ft_putchar_fd('2', fd);
	ft_putchar_fd('_', fd);
	ft_putchar_fd('c', fd);
	ft_putchar_fd('o', fd);
	ft_putchar_fd('m', fd);
	ft_putchar_fd('m', fd);
	ft_putchar_fd('o', fd);
	ft_putchar_fd('n', fd);
	ft_putchar_fd('_', fd);
	ft_putchar_fd('c', fd);
	ft_putchar_fd('o', fd);
	ft_putchar_fd('r', fd);
	ft_putchar_fd('e', fd);
	ft_putchar_fd('!', fd);
	ft_putchar_fd('\n', fd);
	
	close(fd);
	return (0);
}
*/
