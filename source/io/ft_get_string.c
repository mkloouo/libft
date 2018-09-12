/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:01:36 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/11 22:26:19 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>

#include <ft/list.h>
#include <ft/misc/get_string/fd_data.h>

int					ft_get_string(int fd, char **strp, char const *sep)
{
	static t_list	*fd_list = 0;

	if (fd < 0 || read(fd, 0, 0) < 0 || BUFF_SIZE <= 0 || strp == 0)
		return (INPUT_ERROR);
	if (sep == 0)
		sep = LINE_BREAK;
	if (fd_list == 0)
		fd_list = ft_lstnew(&((t_fd_data){.fd = fd, .data = 0}),
					sizeof(t_fd_data));
	return (manage_fd_data(&fd_list, fd, strp, sep));
}
