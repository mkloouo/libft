/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_data.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:18:22 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/07 00:23:00 by modnosum         ###   ########.fr       */
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
}				t_fd_data;

int				manage_fd_data(t_list **list, int fd, char **strp,
				char const *sep);

t_list			*manage_find_fd_data(t_list *list, int fd);
int				read_data_to_fd_data(t_fd_data *fd_data, char const *sep,
				size_t *sep_pos);
void			fd_data_deleter(void *data, size_t size);

#endif
