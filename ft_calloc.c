/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:07:17 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/10 14:32:35 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;

	s = malloc(size * nmemb);
	if (!s)
		return (NULL);
	ft_bzero(s, (size * nmemb));
	return (s);
}
/*int main()
{
	char *str= ft_calloc(10, sizeof(char));;
	int  i;
	i = 0;
	while (i < 10)
	{
		printf("%d\n", str[i]);
		i++;
	}

	free(str);
	return (0);
}*/
