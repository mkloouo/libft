/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 17:48:22 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 17:08:12 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>

#include <ft/memory.h>

int     ft_fdprintf(int fd, const char *fmt, ...)
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
