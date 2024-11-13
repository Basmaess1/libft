/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:38:39 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/10 20:47:12 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
// int main()
// {
// 	int *n1= malloc(sizeof(int));
// 	*n1 = 10;
// 	t_list *node1 =ft_lstnew(n1);
// 	int *n2 = malloc(sizeof(int));
// 	*n2 = 20;
// 	t_list *node2 = ft_lstnew(n2);
// 	node1->next = node2;
// 	t_list *all = node1;
// 	while (all)
// 	{
// 		printf("%d\n",*(int *)all->content);
// 		all = all->next;
// 	}
// 	int size = ft_lstsize(node1);
// 	printf("size is :%d\n",size);
// }
