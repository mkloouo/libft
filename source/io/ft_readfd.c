/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 21:50:33 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/16 21:51:29 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>

#include <ft/string.h>

char		*ft_readfd(int fd)
{
	char	*total;
	char	buff[BUFF_SIZE + 1];
	size_t	t_size;
	ssize_t	rd;

	total = 0;
	t_size = 0;
	while ((rd = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[rd] = 0;
		total = ft_resize_str(total, t_size, t_size + rd);
		ft_strncpy(&total[t_size], buff, (size_t)rd);
		t_size += rd;
	}
	if (rd == 0 && total == 0)
		total = ft_strnew(0, 0);
	return (total);
}
