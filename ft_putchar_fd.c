/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:36:22 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/11 11:46:54 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
// int main()
// {
// 	int fd;
// 	fd = open("test2.txt",O_WRONLY | O_CREAT | O_TRUNC,0644);
// 	if (fd == -1)
// 	return (1);
// ft_putchar_fd('h',fd);
// 	close(fd);

// }
