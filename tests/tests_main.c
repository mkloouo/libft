/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 23:19:56 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/07 17:25:29 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	char *line = 0;
	int fd = IO_STDIN;
	if (ac > 1)
	{
		fd = ft_open_file(av[1], FILE_READ);
		if (fd == -1)
		{
			ft_dprintf(IO_STDERR, "%s: invalid file %s\n", av[0], av[1]);
			exit(1);
		}
	}

	while (ft_get_string(fd, &line, 0) > 0) {
		ft_printf("%s\n", line);
		free(line);
	}
	return (0);
}
