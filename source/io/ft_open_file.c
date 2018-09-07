/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 17:17:50 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 18:14:51 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>

#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define CREATE_FLAG (O_CREAT | O_TRUNC)
#define ACCESS_EVERYTHING_MODE (S_IRWXU | S_IRWXG | S_IRWXO)

int		ft_open_file(const char *file, int mode)
{
	int	fd;

	if (mode == FILE_READ)
		fd = open(file, O_RDONLY);
	else if (mode == FILE_WRITE)
		fd = open(file, (O_WRONLY | CREATE_FLAG), ACCESS_EVERYTHING_MODE);
	else if (mode == FILE_RW)
		fd = open(file, (O_RDWR | CREATE_FLAG), ACCESS_EVERYTHING_MODE);
	else
		fd = -1;
	return (fd);
}
