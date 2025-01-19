/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:04:57 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/27 13:08:57 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!f || !lst)
		return ;
	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

// void to_upper(void *str)
// {
//     char *new = (char *)str;
//     while (*new)
//     {
//         *new = ft_toupper(*new);
//         new++;
//     }
// }

// void printf_linkedlist(t_list *lst)
// {
//     if (!lst)
//     {
//         printf("Nothing to print linked list is empty");
//         return ;
//     }
//     while (lst)
//     {
//         printf("%s \n",lst->content);
//         lst = lst->next;
//     }
// }

// int main(void)
// {
//     t_list *head = ft_lstnew(ft_strdup("amine"));
//     t_list *node1 = ft_lstnew(ft_strdup("yassine"));
//     t_list *node2= ft_lstnew(ft_strdup("moad"));
//     t_list *node3= ft_lstnew(ft_strdup("ben"));

//     head->next = node1;
//     node1->next = node2;
//     node2->next = node3;

//     printf("Before :\n");
//     printf_linkedlist(head);
//     ft_lstiter(head,&to_upper);
//     printf("After :\n");
//     printf_linkedlist(head);
//     return (0);
// }