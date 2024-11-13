/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:51:40 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/10 11:46:39 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	delete(void *d)
// {
// 	free(d);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*int main()
{
	int	*n = malloc(sizeof(int));
	*n = 10;
	t_list *node = ft_lstnew(n);
	printf(" the content is :%d\n",*(int *)node->content);
	ft_lstdelone(node,delete);
}*/