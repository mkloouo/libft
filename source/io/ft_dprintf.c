/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:07:00 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/07 17:07:01 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>

#include <ft/memory.h>

int			ft_dprintf(int fd, const char *fmt, ...)
{
	int		ret;
	va_list	args;
	char	*dst;

	va_start(args, fmt);
	if ((ret = ft_vsprintf(&dst, fmt, &args)) > 0)
	{
		write(fd, dst, ret);
		free(dst);
	}
	va_end(args);
	return (ret);
}
