/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 21:50:33 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/17 21:38:22 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>

#include <ft/string.h>

char		*ft_readfd(int fd)
{
	char	*total;
	char	buff[BUFF_SIZE + 1];
	size_t	t_size;
	size_t	t_cur;
	ssize_t	rd;

	total = 0;
	t_size = 0;
	t_cur = 0;
	while ((rd = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[rd] = 0;
		if (t_cur + rd > t_size)
		{
			total = ft_resize_str(total, t_size, (t_size * 2) + rd);
			t_size = (t_size * 2) + rd;
		}
		ft_strncpy(&total[t_cur], buff, (size_t)rd);
		t_cur += rd;
	}
	if (rd == 0 && total == 0)
		total = ft_strnew(0, 0);
	return (total);
}
