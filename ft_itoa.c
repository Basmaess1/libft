/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:41:12 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/10 17:43:08 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (11);
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*handle_zero(char *str)
{
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		length;
	long	num;

	num = n;
	length = len(n);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (num == 0)
		return (handle_zero(str));
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[--length] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}

// int main()
// {
//     char *s;
//     int n ;
//     s = ft_itoa(2147483647);
//     if (!s)
//         printf ("NULL");
//     printf ("%s\n",s);
// }
