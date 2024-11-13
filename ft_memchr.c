/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:34:15 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/11 18:27:10 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*ptr;
	size_t				i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return ((void *)(ptr + i));
		}
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char s[]= "basmaerf";
// 	char *res = (char *)ft_memchr(s,'k',7);
// 	if (res != NULL)
// 	printf("%s\n",res );
// 	else
// 	printf ("ng\n");
// }
