/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:57:16 by mbenomar          #+#    #+#             */
/*   Updated: 2025/01/18 13:57:18 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	alloc_text(t_data *g_data, int len)
{
	g_data->text_received = (char *) malloc(len + 1);
	if (!g_data->text_received)
		exit(1);
	g_data->text_received[len] = '\0';
	g_data->is_allocated = 1;
}

void	receive_len(t_data *g_data, int sig)
{
	if (sig == SIGUSR1)
		g_data->len = g_data->len << 1;
	else if (sig == SIGUSR2)
		g_data->len = (g_data->len << 1) | 1;
	g_data->receive++;
}

void	init_g_data(t_data *g_data, pid_t pid)
{
	g_data->text_received = NULL;
	g_data->index = 0;
	g_data->c = 0;
	g_data->len = 0;
	g_data->receive = 0;
	g_data->client_id = pid;
	g_data->is_allocated = 0;
	g_data->text_index = 0;
}

void	check_client(t_data *g_data, pid_t pid)
{
	if (!g_data->client_id)
		g_data->client_id = pid;
	if (g_data->client_id != pid)
	{
		free(g_data->text_received);
		init_g_data(g_data, pid);
	}
}
