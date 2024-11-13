/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:23:46 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/07 18:26:37 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
// int main()
// {
// 	int *num1 = malloc(sizeof(int));
// 	*num1 = 10;
// 	t_list *node1=ft_lstnew(num1);
// 	int *num2 = malloc(sizeof(int));
// 	*num2 = 55;
// 	t_list *node2=ft_lstnew(num2);
// 	node1->next = node2;
// 	t_list *last = ft_lstlast(node1);
// 	printf("%d\n",*(int *)last->content);
// }