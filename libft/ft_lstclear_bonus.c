/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:52:47 by mbenomar          #+#    #+#             */
/*   Updated: 2024/11/01 17:44:46 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		tmp = *lst;
		*lst = tmp->next;
		ft_lstdelone(tmp, del);
	}
}

// void check_leask(void)
// {
// 	system("leaks a.out");
// }
// int	main(void)
// {
// 	t_list *head = ft_lstnew(ft_strdup("amine"));
// 	t_list *node1 = ft_lstnew(ft_strdup("yassine"));
// 	t_list *node2 = ft_lstnew(ft_strdup("moad"));
// 	t_list *node3 = ft_lstnew(ft_strdup("benomar"));
// 	head->next = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	printf("before : %d\n", ft_lstsize(head));
// 	ft_lstclear(&head, &free);
// 	printf("After : %d\n", ft_lstsize(head));
// 	atexit(check_leask);
// 	return (0);
// }