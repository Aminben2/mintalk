/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:28:12 by mbenomar          #+#    #+#             */
/*   Updated: 2024/11/02 19:03:20 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!new || !lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
}

// int main(void)
// {
//     t_list *head = ft_lstnew("amine");
//         t_list *node1 = ft_lstnew("ben");
//             t_list *node2 = ft_lstnew("oma");
//                 t_list *node3 = ft_lstnew("mohamed");
//     head->next = node1;
//     node1->next = node2;
//     node2->next = node3;

//     t_list **lst = &head;
//     ft_lstadd_back(lst,ft_lstnew("test"));
//     t_list *curr = head;
//     while (curr)
//     {
//         printf("%s\n",curr->content);
//         curr = curr->next;
//     }

//     return (0);
// }