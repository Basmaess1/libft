/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:40:39 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/10 11:44:22 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (fd < 0 || !s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*int main()
{
	int fd;
	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
		return (1);
	ft_putstr_fd("basma essabri", fd);
	close(fd);
	return (0);
}*/
