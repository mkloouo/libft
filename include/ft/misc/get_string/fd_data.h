/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_data.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:18:22 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/11 22:35:51 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FD_DATA_H
# define FD_DATA_H

# include <stddef.h>

# include <ft/list.h>

typedef struct	s_fd_data
{
	int			fd;
	char		*data;
	size_t		data_len;
}				t_fd_data;

int				manage_fd_data(t_list **list, int fd, char **strp,
				char const *sep);

t_list			*manage_find_fd_data(t_list *list, int fd);

void			fd_data_deleter(void *data, size_t size);

#endif
