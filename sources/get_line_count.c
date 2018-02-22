/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_line_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 00:09:35 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 04:23:42 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>

int						get_line_count(const char *file)
{
	char				buff[BUFF_SIZE + 1];
	int					fd;
	int					count;
	ssize_t				r;

	count = 0;
	if ((fd = open_file(file, FILE_READ)) != -1)
	{
		while ((r = read(fd, buff, BUFF_SIZE)) > 0)
		{
			buff[r] = 0;
			count += ft_strcc(buff, '\n');
		}
		close_file(fd);
	}
	return (count);
}
