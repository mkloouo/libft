/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 17:17:50 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/02 19:57:29 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <ft/io.h>

int						ft_open_file(const char *file, int mode)
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
