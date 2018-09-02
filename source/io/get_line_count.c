/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_line_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 00:09:35 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:43:45 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ft/string.h>
#include <ft/io.h>

int						get_line_count(const char *file)
{
	char				buff[BUFF_SIZE + 1];
	int					fd;
	int					count;
	ssize_t				p;
	ssize_t				r;

	p = 0;
	r = 0;
	count = 0;
	if ((fd = open_file(file, FILE_READ)) != -1)
	{
		while ((r = read(fd, buff, BUFF_SIZE)) > 0)
		{
			p = r;
			buff[r] = 0;
			count += ft_strcs(buff, LINE_BREAK);
		}
		if (p != r && buff[p - 1] != '\n')
			count++;
		close_file(fd);
	}
	return (count);
}
