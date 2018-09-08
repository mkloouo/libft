/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_line_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 00:09:35 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 17:10:02 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>

#include <ft/string.h>

int						ft_get_line_count(const char *file)
{
	char				buff[BUFF_SIZE + 1];
	int					fd;
	int					count;
	ssize_t				p;
	ssize_t				r;

	p = 0;
	r = 0;
	count = 0;
	if ((fd = ft_open_file(file, FILE_READ)) != -1)
	{
		while ((r = read(fd, buff, BUFF_SIZE)) > 0)
		{
			p = r;
			buff[r] = 0;
			count += ft_strcs(buff, LINE_BREAK);
		}
		if (p != r && buff[p - 1] != '\n')
			count++;
		ft_close_file(fd);
	}
	return (count);
}
