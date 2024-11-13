/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:39:25 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/09 12:11:25 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static int	word_length(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		i++;
	}
	return (i);
}

static char	**ft_free(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

static const char	*skip_delim(const char *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	int		counter;
	char	**res;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	counter = count_words(s, c);
	res = malloc(sizeof(char *) * (counter + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < counter)
	{
		s = skip_delim(s, c);
		len = word_length(s, c);
		res[i] = ft_substr(s, 0, len);
		if (!res[i++])
		{
			return (ft_free(res));
		}
		s += len;
	}
	res[counter] = NULL;
	return (res);
}
// int main()
// {
// 	char **res = ft_split("\\\\ba\\sma\\",'\\');
// 	int i = 0;
// 	while (res[i])
// 	{
// 			printf("%s\n",res[i]);
// 			i++;
// 	}
// 	ft_free(res);
// }
