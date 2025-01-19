/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:44:58 by mbenomar          #+#    #+#             */
/*   Updated: 2024/11/02 17:56:29 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*new_src;
	unsigned char	*new_dest;

	new_src = (unsigned char *)src;
	new_dest = (unsigned char *)dest;
	if (new_src > new_dest)
		return (ft_memcpy(dest, src, n));
	else if (new_src < new_dest)
	{
		while (n > 0)
		{
			new_dest[n - 1] = new_src[n - 1];
			n--;
		}
	}
	return (dest);
}
