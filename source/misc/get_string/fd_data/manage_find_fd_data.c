/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_find_fd_data.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 22:36:10 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/07 16:33:12 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/misc/get_string/fd_data.h>

#include <ft/string.h>
#include <ft/memory.h>

t_fd_data		*manage_find_fd_data(t_fd_data **fds, int fd)
{
	t_fd_data	*cur;
	t_fd_data	*fd_data;

	cur = *fds;
	while (*fds && (*fds)->fd != fd)
		(*fds) = (*fds)->next;
	if ((fd_data = *fds))
		*fds = cur;
	else
	{
		fd_data = malloc(sizeof(t_fd_data));
		fd_data->fd = fd;
		fd_data->data = ft_strnew(0, 0);
		fd_data->left = 0;
		fd_data->next = 0;
		if (!cur)
			*fds = fd_data;
		else
		{
			(*fds)->next = fd_data;
			*fds = cur;
		}
	}
	return (fd_data);
}
