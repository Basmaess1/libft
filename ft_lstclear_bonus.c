/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:13:33 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/11 18:15:40 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	delete(void *d)
// {
// 	free(d);
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*a;
	t_list	*next;

	if (!lst || !del)
		return ;
	a = *lst;
	while (a != NULL)
	{
		next = a->next;
		ft_lstdelone(a, del);
		a = next;
	}
	*lst = NULL;
}

