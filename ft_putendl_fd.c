/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:07:54 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/10 17:47:42 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd < 0 || !s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
/*int main()
{
		int fd;
	fd = open("test5.txt",O_RDWR | O_CREAT | O_TRUNC,0644);
	if (fd == -1)
	return (1);
ft_putendl_fd("basma",fd);
	close(fd);
}*/
