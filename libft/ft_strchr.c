/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:32:34 by mbenomar          #+#    #+#             */
/*   Updated: 2024/11/02 17:59:57 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
// int main(void)
// {
// 	printf("|%s|\n",strchr(NULL,'\0'));
// 	printf("|%s|\n",ft_strchr(NULL,'\0'));
// 	return 0;
// }
// char	*ft_strchr(const char *s, int c)
// {
// 	while (*s != (char)c)
// 	{
// 		if (!*s)
// 			return (0);
// 		s++;
// 	}
// 	return ((char *)s);
// }