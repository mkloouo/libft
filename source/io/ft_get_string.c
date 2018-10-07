/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:01:36 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/07 16:13:35 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>

#include <ft/misc/get_string/fd_data.h>
#include <ft/memory.h>

int						ft_get_string(int fd, char **strp, char const *sep)
{
	static t_fd_data	*fds = 0;

	if (fd < 0 || read(fd, 0, 0) < 0 || BUFF_SIZE <= 0 || strp == 0)
		return (INPUT_ERROR);
	if (sep == 0)
		sep = LINE_BREAK;
	return (manage_fd_data(&fds, fd, strp, sep));
}
