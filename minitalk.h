/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:56:51 by mbenomar          #+#    #+#             */
/*   Updated: 2025/01/19 10:58:44 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "./libft/libft.h"
# include "./printf/ft_printf.h"

typedef struct s_data {
	char	*text_received;
	int		index;
	char	c;
	int		len;
	int		receive;
	char	*text;
	int		client_id;
	int		is_allocated;
	int		text_index;
	int		server_id;
}	t_data;

void	alloc_text(t_data *g_data, int len);
void	init_g_data(t_data *g_data, pid_t pid);
void	receive_len(t_data *g_data, int sig);
void	check_client(t_data *g_data, pid_t pid);

#endif
