/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 21:50:33 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/19 03:29:54 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>

#include <ft/string.h>
#include <ft/memory.h>

char		*ft_readfd(int fd, size_t *len)
{
	char	*total;
	char	buff[BUFF_SIZE + 1];
	size_t	t_size;
	ssize_t	rd;

	total = 0;
	t_size = 0;
	*len = 0;
	while ((rd = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[rd] = 0;
		if (*len + rd > t_size)
		{
			total = ft_resize_str(total, t_size, (t_size * 2) + rd);
			t_size = (t_size * 2) + rd;
		}
		ft_memcpy(&total[*len], buff, (size_t)rd);
		*len += rd;
	}
	if (rd == 0 && total == 0)
		total = ft_strnew(0, 0);
	return (total);
}
