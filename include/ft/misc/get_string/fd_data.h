/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_data.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:18:22 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/07 17:05:25 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FD_DATA_H
# define FD_DATA_H

# include <stddef.h>

# include <ft/list.h>

typedef struct			s_fd_data
{
	int					fd;
	size_t				left;
	char				*data;
	struct s_fd_data	*next;
}						t_fd_data;

int						manage_fd_data(t_fd_data **fds, int fd, char **strp,
						char const *sep);

t_fd_data				*manage_find_fd_data(t_fd_data **fds, int fd);
int						read_data_to_fd_data(t_fd_data *fd_data,
						char const *sep, size_t *sep_pos);

#endif
