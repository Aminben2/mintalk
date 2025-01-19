/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:55:53 by mbenomar          #+#    #+#             */
/*   Updated: 2024/11/26 15:42:21 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int address, char format)
{
	char	*hexa;
	int		len;

	if (format == 'x')
		hexa = "0123456789abcdef";
	else if (format == 'X')
		hexa = "0123456789ABCDEF";
	else
		return (0);
	len = 0;
	if (address >= 16)
		len += ft_puthexa(address / 16, format);
	len += ft_putchar(hexa[address % 16]);
	return (len);
}
