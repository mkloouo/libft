/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:03:40 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 17:08:08 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>

#include <ft/memory.h>

int					ft_printf(char const *fmt, ...)
{
	int		ret;
	va_list	args;
	char	*dst;

	va_start(args, fmt);
	if ((ret = ft_vsprintf(&dst, fmt, &args)) > 0)
	{
		write(STDOUT_FILENO, dst, ret);
		free(dst);
	}
	va_end(args);
	return (ret);
}
