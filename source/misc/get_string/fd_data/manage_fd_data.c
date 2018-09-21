/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_fd_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:19:58 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/21 16:22:42 by modnosum         ###   ########.fr       */
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
