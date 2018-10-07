/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_fd_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:19:58 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/07 17:49:10 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/misc/get_string/fd_data.h>

#include <ft/io.h>
#include <ft/string.h>
#include <ft/memory.h>

static void		del_fd_data(t_fd_data **fds, t_fd_data *fd_data)
{
	t_fd_data	*prev;
	t_fd_data	*cur;

	prev = 0;
	cur = *fds;
	while (*fds && *fds != fd_data)
	{
		prev = (*fds);
		(*fds) = (*fds)->next;
	}
	if (*fds == fd_data)
	{
		if (prev)
			prev->next = (*fds)->next;
		free((*fds)->data);
		(*fds)->data = 0;
		(*fds)->next = 0;
		free(*fds);
		*fds = 0;
		*fds = cur;
	}
}

int				manage_fd_data(t_fd_data **fds, int fd, char **strp,
				char const *sep)
{
	t_fd_data	*fd_data;
	char		*tmp;
	size_t		sep_pos;
	int			r;

	sep_pos = 0;
	fd_data = manage_find_fd_data(fds, fd);
	if ((r = read_data_to_fd_data(fd_data, sep, &sep_pos)) == INPUT_ERROR ||
		fd_data->left == 0)
	{
		del_fd_data(fds, fd_data);
		return (r);
	}
	*strp = ft_strndup(fd_data->data, sep_pos);
	tmp = fd_data->data;
	sep_pos = sep_pos + ft_strlen(sep);
	fd_data->data = ft_strdup(&fd_data->data[sep_pos]);
	fd_data->left -= sep_pos;
	free(tmp);
	return (INPUT_OK);
}
