/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_data_to_fd_data.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 16:21:30 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/11 00:06:29 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/misc/get_string/fd_data.h>

#include <ft/io.h>
#include <ft/string.h>
#include <ft/memory.h>

static int		store_sep_pos(char const *data, char const *sep,
				size_t *sep_pos, char const *already_found)
{
	char const	*sep_occ;

	if (already_found)
		sep_occ = already_found;
	else
		sep_occ = ft_strstr(data, sep);
	if (sep_occ)
		*sep_pos = sep_occ - data;
	return (sep_occ != 0);
}

int				read_data_to_fd_data(t_fd_data *fd_data, char const *sep,
				size_t *sep_pos)
{
	char		buffer[BUFF_SIZE + 1];
	char		*tmp;
	ssize_t		rd;

	tmp = 0;
	if (fd_data->left != 0 && ft_strstr(fd_data->data, sep))
		return (store_sep_pos(fd_data->data, sep, sep_pos, 0));
	while ((rd = read(fd_data->fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[rd] = 0;
		fd_data->data = ft_resize_str(fd_data->data, fd_data->left,
				fd_data->left + rd);
		ft_strncpy(&fd_data->data[fd_data->left], buffer, (size_t)rd);
		fd_data->left += rd;
		if ((tmp = (char *)ft_strstr(fd_data->data, sep)))
			break ;
	}
	if (rd < 0)
		return ((int)rd);
	return (store_sep_pos(fd_data->data, sep, sep_pos, tmp));
}
