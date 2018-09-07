/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:03:40 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 16:38:41 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>

#include <ft/misc/printf/info.h>
#include <ft/misc/printf/parse.h>
#include <ft/misc/printf/arg.h>

int					ft_printf(char const *fmt, ...)
{
	va_list			args;
	t_info			info;
	const char		*save;

	if (!(save = fmt) || fmt == 0)
		return (PRINTF_ERROR);
	va_start(args, fmt);
	init_info(&info);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			update_result(&info, save, (fmt - save));
			if (validate_arg(&save, &fmt, &info, &args))
				manage_arg(&args, &info);
		}
		else
			++fmt;
	}
	print_result(fmt, save, &info);
	va_end(args);
	return ((int)info.cur);
}
