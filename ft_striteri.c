/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:41:55 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/09 19:06:57 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	to_upper(unsigned int i, char *c)
// {
// 	*c = *c - 32;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*int main()
{
void	(*f)(unsigned int, char*) = to_upper;
	char s[]= "hello";
		ft_striteri(s,to_upper);
	printf("%s\n",s);
}*/
