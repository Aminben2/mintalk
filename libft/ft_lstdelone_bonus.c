/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:08:17 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/27 14:10:03 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void check_leaks(void)
// {
// 	system("leaks a.out");
// }

// int main(void)
// {
// 	t_list *head = ft_lstnew(ft_strdup("amine"));
// 	printf("Before : %s\n", head->content);
// 	atexit(check_leaks);
// 	ft_lstdelone(head, &free);
// 	printf("After : %s\n", head->content);
// 	return (0);
// }