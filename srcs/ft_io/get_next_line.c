/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/24 19:18:05 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/04 05:56:05 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char					*read_data(const int fd, char *data)
{
	char				*temp;
	char				buffer[BUFF_SIZE + 1];
	int					rd;

	if ((data = (data) ? (data) : (ft_strnew(0))))
	{
		while ((rd = read(fd, buffer, BUFF_SIZE)) > 0)
		{
			buffer[rd] = 0;
			temp = data;
			data = ft_strjoin(data, buffer);
			ft_strdel(&temp);
			if (ft_strchr(buffer, '\n'))
				return (data);
		}
		return ((rd == 0) ? (data) : (NULL));
	}
	return (NULL);
}

int						parse_data(char **data, char **line)
{
	char				*nl;

	if (*data)
	{
		if (ft_strlen(*data) == 0)
		{
			ft_strdel(data);
			return (0);
		}
		if ((nl = ft_strchr(*data, '\n')))
		{
			*nl = 0;
			nl = ft_strdup(nl + 1);
		}
		*line = ft_strdup(*data);
		ft_strdel(data);
		*data = (nl) ? (nl) : (ft_strnew(0));
		return (1);
	}
	return (-1);
}

int						get_next_line(const int fd, char **line)
{
	static char			*fd_data[FD_SIZE];

	if (line && fd >= 0 && read(fd, 0, 0) != -1)
	{
		*line = NULL;
		fd_data[fd] = read_data(fd, fd_data[fd]);
		return (parse_data((fd_data + fd), line));
	}
	return (-1);
}
