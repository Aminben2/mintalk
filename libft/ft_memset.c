/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:01:28 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/26 19:04:05 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	new_c;
	unsigned char	*new_s;

	i = 0;
	new_c = c;
	new_s = s;
	while (i < n)
	{
		new_s[i] = new_c;
		i++;
	}
	return (s);
}
