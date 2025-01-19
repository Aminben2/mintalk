/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:24:46 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/27 09:01:32 by mbenomar         ###   ########.fr       */
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

// int main(void)
// {
//     t_list *head = ft_lstnew("amine");
//     t_list *node1 = ft_lstnew("ben");
//     t_list *node2 = ft_lstnew("yassine");
//     t_list *node3 = ft_lstnew("salim");

//     head->next = node1;
//     head->next->next = node2;
//     head->next->next->next = node3;
//     printf("%s",ft_lstlast(head)->content);
//     return (0);
// }