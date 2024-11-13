/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:54:09 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/11 12:28:23 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// int main()
//  {
//     char s[]="BBhj";
//     int c = 'A';
//     // size_t i;
//     // i = 0;
//     char *res= ft_memset(s,c,3);
//     printf("%s\n",res);
//    while (i < sizeof(s))
//     {
//         printf("%c\n",s[i]);
//         i++;

//     }
// int arr[] ={0};
// ft_memset(&arr[0],-1,4);
// ft_memset(&arr[0],-6,2);
// ft_memset(&arr[0],-57,1);
// printf("%d\n",arr[0]);
// }
