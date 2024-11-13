/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:51:28 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/10 11:47:14 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	delete(void *d)
// {
// 	free(d);
// }

// void	*add(void	*content)
// {
// 	int	*num;

// 	num = (int *)content;
// 	(*num)++;
// 	return (num);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			if (content)
				del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*int main()
{
	int *n1 = malloc(sizeof(int));
	*n1 = 1;
	t_list *node1 =ft_lstnew(n1);
	int *n2 = malloc(sizeof(int));
	*n2 = 3;
	t_list *node2 =ft_lstnew(n2);
	int *n3 = malloc(sizeof(int));
	*n3 = 4;
	t_list *node3 =ft_lstnew(n3);
	ft_lstadd_back(&node1,node2);
	ft_lstadd_back(&node1,node3);
	t_list *new_list = ft_lstmap(node1, add, delete);
	t_list *current = new_list;
	while (current) {
		printf("%d\n",*(int *)current->content);
		current = current->next;
	}
}*/