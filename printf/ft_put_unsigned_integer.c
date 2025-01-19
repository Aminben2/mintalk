/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_integer.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:00:33 by mbenomar          #+#    #+#             */
/*   Updated: 2024/11/26 15:41:50 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned_integer(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb >= 10)
		len += ft_put_unsigned_integer(nb / 10);
	len += ft_putchar(nb % 10 + '0');
	return (len);
}
