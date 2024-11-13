/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:45:17 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/06 20:56:42 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}
/*int main()
{
	t_list *head = ft_lstnew((void *)10);
	t_list *node1 = ft_lstnew((void *)20);
	t_list *node2 = ft_lstnew((void *)30);
	ft_lstadd_back(&head,node2);
	ft_lstadd_back(&head,node1);
	t_list *d = head;
	while (d != NULL)
	{
		printf("%d\n",d->content);
		d = d->next;
	}
}*/
