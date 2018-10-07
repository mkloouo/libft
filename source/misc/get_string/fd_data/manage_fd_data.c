/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_fd_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:19:58 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/07 04:53:23 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/misc/get_string/fd_data.h>

#include <ft/io.h>
#include <ft/string.h>
#include <ft/memory.h>

int				manage_fd_data(t_list **list, int fd, char **strp,
				char const *sep)
{
	size_t		sep_pos;
	char		*tmp;
	t_fd_data	*fd_data;
	t_list		*element;
	int			r;

	sep_pos = 0;
	element = manage_find_fd_data(*list, fd);
	fd_data = (t_fd_data*)(element->data);
	r = read_data_to_fd_data(fd_data, sep, &sep_pos);
	if (r == INPUT_ERROR || (r == INPUT_END && ft_strlen(fd_data->data) == 0))
	{
		if (r == INPUT_END)
			free(fd_data->data);
		ft_lstdel_el(list, element, fd_data_deleter);
		return (r);
	}
	*strp = ft_strndup(fd_data->data, sep_pos);
	tmp = fd_data->data;
	sep_pos = sep_pos + ft_strlen(sep);
	fd_data->data = ft_strdup(&fd_data->data[sep_pos]);
	free(tmp);
	return (INPUT_OK);
}
