/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 17:17:50 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:39:36 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <ftio.h>

int						open_file(const char *file, int mode)
{
	int					fd;

	if (mode == FILE_READ)
		fd = open(file, O_RDONLY);
	else if (mode == FILE_WRITE)
		fd = open(file, O_WRONLY);
	else if (mode == FILE_RW)
		fd = open(file, O_RDWR);
	else
		fd = -1;
	return (fd);
}
