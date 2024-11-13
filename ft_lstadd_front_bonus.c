/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:34:15 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/10 22:28:41 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*int main()
{
	int num1 = 10;
	t_list *list = ft_lstnew(&num1);
	int num2 = 60;
	t_list *new = ft_lstnew(&num2);
	ft_lstadd_front(&list, new);
	t_list *all = list;
	while (all)
	{
		printf("%d\n", *(int *)all->content);
		all = all->next;
	}
	free(list->next);
	free(list);
	return (0);
}*/
