/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:55:51 by mbenomar          #+#    #+#             */
/*   Updated: 2025/01/18 13:56:47 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_data	g_data;

void	send_len(int len)
{
	int	i;
	int	bit;

	i = 32;
	while (--i >= 0)
	{
		bit = (len >> i) & 1;
		if (bit == 0)
			kill(g_data.server_id, SIGUSR1);
		else
			kill(g_data.server_id, SIGUSR2);
		usleep(150);
	}
}

void	send_bits(void)
{
	int				i;
	int				bit;
	const char		*str; 

	str = g_data.text;
	send_len(ft_strlen(str));
	while (*str)
	{
		i = 7;
		while (i >= 0)
		{
			bit = *str >> i & 1;
			if (bit == 0)
				kill(g_data.server_id, SIGUSR1);
			else
				kill(g_data.server_id, SIGUSR2);
			usleep(150);
			i--;
		}
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		g_data.server_id = ft_atoi(argv[1]);
		g_data.text = argv[2];
		send_bits();
	}
	else
		ft_putstr_fd("Executed like this: ./client <pid> <text>", 2);
	return (0);
}
