/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:29:05 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/10 11:10:30 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lend;
	size_t	lens;
	size_t	i;

	i = 0;
	lens = ft_strlen((char *)src);
	if (!dst && size == 0)
		return (lens);
	lend = ft_strlen(dst);
	if (size <= lend)
		return (size + lens);
	while (src[i] && (lend + i + 1) < size)
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	return (lend + lens);
}
// int main()
// {
//     char dest[9]="basma";
//     char *src = "ess";
// 	size_t res = strlcat(dest, src, 6);
//     printf("%d\n", res);

//     return (0);
// }
