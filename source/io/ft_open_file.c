/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 17:17:50 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/11 19:44:52 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>

#include <fcntl.h>
#include <sys/stat.h>

#define CREATE_FLAG (O_CREAT | O_TRUNC)
#define COMM_MODE (S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH | S_IRUSR | S_IWUSR)

int		ft_open_file(const char *file, int mode)
{
	int	fd;

	if (mode == FILE_READ)
		fd = open(file, O_RDONLY);
	else if (mode == FILE_WRITE)
		fd = open(file, (O_WRONLY | CREATE_FLAG), COMM_MODE);
	else if (mode == FILE_RW)
		fd = open(file, (O_RDWR | CREATE_FLAG), COMM_MODE);
	else
		fd = -1;
	return (fd);
}
