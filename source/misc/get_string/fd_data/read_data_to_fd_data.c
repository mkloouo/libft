/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_data_to_fd_data.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 16:21:30 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/07 00:23:03 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/misc/get_string/fd_data.h>

#include <ft/io.h>
#include <ft/string.h>
#include <ft/memory.h>

int				read_data_to_fd_data(t_fd_data *fd_data, char const *sep,
				size_t *sep_pos)
{
	char		*tmp;
	ssize_t		rd;
	char		buffer[BUFF_SIZE + 1];

	while ((rd = read(fd_data->fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[rd] = 0;
		tmp = ft_strjoin(fd_data->data, buffer);
		free(fd_data->data);
		fd_data->data = tmp;
		tmp = (char*)ft_strstr(fd_data->data, sep);
		if (tmp)
		{
			*sep_pos = tmp - fd_data->data;
			return (INPUT_OK);
		}
	}
	return (rd < 0 ? INPUT_ERROR : INPUT_END);
}
