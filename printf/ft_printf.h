/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:31:36 by mbenomar          #+#    #+#             */
/*   Updated: 2024/11/30 11:03:34 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_put_signed_integer(int nb);
int	ft_put_unsigned_integer(unsigned int nb);
int	ft_putstr(char *str);
int	ft_puthexa(unsigned int address, char format);
int	ft_putaddress(unsigned long address);

#endif