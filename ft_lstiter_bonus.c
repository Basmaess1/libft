/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:44:30 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/08 14:22:23 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ddouble(void *d)
// {
// 	int	*n = (int *)d;
// 	*n *= 2;
// }
// void print_function(void *content)
// {
//     int *num = (int *)content;
//     printf("%d ", *num);
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*int main()
{
	int *n1 = malloc(sizeof(int));
	*n1 = 1;
	t_list *node1 =ft_lstnew(n1);
	int *n2 = malloc(sizeof(int));
	*n2 = 2;
	t_list *node2 =ft_lstnew(n2);
	int *n3 = malloc(sizeof(int));
	*n3 = 5;
	t_list *node3 =ft_lstnew(n3);
	ft_lstadd_back(&node1,node2);
	ft_lstadd_back(&node1,node3);
	ft_lstiter(node1, ddouble);
	t_list *c = node1;
	while (c != NULL)
	{
	printf("%d\n",*(int *)c->content);
	c = c->next;
	}
	//ft_lstiter(lst, print_function);
}*/
