/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:07:29 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/11 10:05:37 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	if (!dest && !src)
	{
		return (NULL);
	}
	i = 0;
	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (dest);
}
// int main()
// {
//  int dest[]= {0};
//  int src[]={10,20,30,40};
// 	ft_memcpy(dest,src,3 * sizeof(int));
// 	int i;
// 	i = 0;
// 	while (i < 3)
// 	{
// 	printf("%d\n",dest[i]);
// 	i++;
// 	}
// }
