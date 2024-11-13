/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:45:56 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/11 16:19:49 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big && len == 0)
		return (NULL);
	if (!*little)
	{
		return ((char *)(big));
	}
	while (big[i] && i < len)
	{
		j = 0;
		while ((i + j) < len && big[i + j] && little[j]
			&& big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)(big + i));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
	const char *big = "hello world";
	const char *little = "world";
	char *res =ft_strnstr(big,little,5);
	printf("%s\n",res);
}*/
