/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:29:39 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/11 11:59:45 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (!dest && !src)
		return (NULL);
	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	if (ptr1 < ptr2)
	{
		while (n > 0)
		{
			n--;
			ptr2[n] = ptr1[n];
		}
	}
	else
		ft_memcpy(ptr2, ptr1, n);
	return (dest);
}
