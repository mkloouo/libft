/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:01:36 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/02 19:52:29 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ft/string.h>
#include <ft/io.h>

static char				*read_data(const int fd, char *data, char *sep)
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
			if (ft_strstr(buffer, sep))
				return (data);
		}
		return ((rd == 0) ? (data) : (NULL));
	}
	return (NULL);
}

static int				parse_data(char **data, char **str, char *sep)
{
	char				*nl;

	if (*data)
	{
		if (ft_strlen(*data) == 0)
		{
			ft_strdel(data);
			return (INPUT_END);
		}
		if ((nl = ft_strstr(*data, sep)))
		{
			*nl = 0;
			nl = ft_strdup(nl + ft_strlen(sep));
		}
		*str = ft_strdup(*data);
		ft_strdel(data);
		*data = (nl) ? (nl) : (ft_strnew(0));
		return (INPUT_OK);
	}
	return (INPUT_ERROR);
}

int						get_string(const int fd, char **str, char *sep)
{
	static char			*fd_data[FD_SIZE];

	if (str && fd >= 0 && read(fd, 0, 0) != -1 && BUFF_SIZE > 0)
	{
		*str = NULL;
		fd_data[fd] = read_data(fd, fd_data[fd], sep);
		return (parse_data((fd_data + fd), str, sep));
	}
	return (INPUT_ERROR);
}
