/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 23:19:56 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/10 23:48:04 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>
#include <stdlib.h>
#include <ft/string.h>
#include <ft/conv.h>

int			main(int ac, char **av)
{
	int		r;
	char	*line = 0;
	int		fd = IO_STDIN;

	while (42)
	{
		ft_printf("cmd: ");
		if (ft_get_string(fd, &line, 0) <= 0)
			break ;
		if (!ft_strcmp(line, "file"))
		{
			free(line);
			ft_printf("enter filename: ");
			ft_get_string(fd, &line, 0);
			int file = ft_open_file(line, FILE_READ);
			if (file == -1)
				ft_printf("invalid file.\n");
			else
			{
				while ((r = ft_get_string(file, &line, LINE_BREAK)) > 0)
				{
					ft_printf("data: %s\n", line);
					free(line);
				}
				if (r == -1)
					ft_printf("an error occured while reading file.\n");
			}
		}
		else
		{
			ft_printf("invalid cmd: %s\n", line);
			free(line);
		}
	}
	ft_printf("End.\n");
	return (0);
}
