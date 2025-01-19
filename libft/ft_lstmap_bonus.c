/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:07:40 by mbenomar          #+#    #+#             */
/*   Updated: 2024/11/02 11:46:05 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	void	*ptr;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		ptr = f(lst->content);
		new_node = ft_lstnew(ptr);
		if (!new_node)
		{
			del(ptr);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	return (head);
}

// void	*to_upper(void *str)
// {
// 	char	*new;

// 	new = ft_strdup((char *)str);
//     int i = 0;
// 	while (new[i])
// 	{
// 		new[i] = ft_toupper(new[i]);
// 		i++;
// 	}
// 	return (new);
// }

// void	ll(void)
// {
// 	system("leaks a.out");
// }

// int	main(void)
// {
// 	t_list *head = ft_lstnew(ft_strdup("amine"));
// 	t_list *node1 = ft_lstnew(ft_strdup("yassine"));
// 	t_list *node2 = ft_lstnew(ft_strdup("moad"));
// 	t_list *new;

// 	head->next = node1;
// 	node1->next = node2;

// 	atexit(ll);
// 	new = ft_lstmap(head, &to_upper, &free);
//     while (new)
//     {
//         printf("==> %s\n",new->content);
//         new = new->next;
//     }
//     ft_lstclear(&head, &free);
//     ft_lstclear(&new, &free);
// 	return (0);
// }