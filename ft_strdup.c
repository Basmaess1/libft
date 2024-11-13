/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:54:59 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/09 19:20:36 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		i;

	i = 0;
	d = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!d)
	{
		return (0);
	}
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
/*int main()
{
	char str[] ="kdsklds;[]";
	char *res = ft_strdup(str);
	printf("%s\n",res);
	printf("%s\n",str);
	free (res);


}*/
