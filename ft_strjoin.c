/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:11:45 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/10 21:19:51 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	while (*src)
	{
		*dest++ = *src++;
	}
	return (dest);
}

static char	*ft_strcat(char *dest, const char *src)
{
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (i + j + 1));
	if (!res)
		return (NULL);
	ft_strcpy(res, s1);
	ft_strcat(res + i, s2);
	return (res);
}
