/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_data_deleter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:17:35 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 21:19:24 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/misc/get_string/fd_data.h>

void			fd_data_deleter(void *data, size_t size)
{
	t_fd_data	*fd_data;

	if (data)
	{
		(void)size;
		fd_data = (t_fd_data*)data;
		fd_data->fd = 0;
		if (fd_data->data)
			free(fd_data->data);
		fd_data->data = 0;
		free(fd_data);
	}
}
