/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_fd_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:19:58 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/21 15:47:44 by modnosum         ###   ########.fr       */
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
		free(fd_data);
		fd_data->data = tmp;
		fd_data->data_len += rd;
		tmp = (char*)ft_strstr(fd_data->data, sep);
		if (tmp)
		{
			*sep_pos = tmp - fd_data->data;
			return (INPUT_OK);
		}
	}
	return (rd < 0 ? INPUT_ERROR : INPUT_END);
}

int				manage_fd_data(t_list **list, int fd, char **strp,
				char const *sep)
{
	size_t		sep_pos;
	char		*tmp;
	t_fd_data	*fd_data;
	t_list		*element;
	int			r;

	element = manage_find_fd_data(*list, fd);
	fd_data = (t_fd_data*)(element->data);
	r = read_data_to_fd_data(fd_data, sep, &sep_pos);
	if (r == INPUT_ERROR || r == INPUT_END)
	{
		if (r == INPUT_END)
			*strp = ft_strndup(fd_data->data, fd_data->data_len);
		ft_lstdel_el(list, element, fd_data_deleter);
		return (r);
	}
	*strp = ft_strndup(fd_data->data, sep_pos);
	tmp = fd_data->data;
	sep_pos = sep_pos + ft_strlen(sep);
	fd_data->data = ft_strsub(fd_data->data, sep_pos,
					fd_data->data_len - sep_pos);
	free(tmp);
	return (INPUT_OK);
}
