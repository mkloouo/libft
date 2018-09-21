/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vsprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 17:53:29 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/21 15:46:23 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>

#include <ft/misc/printf/info.h>
#include <ft/misc/printf/parse.h>
#include <ft/misc/printf/arg.h>

int				ft_vsprintf(char **dst, char const *fmt, va_list *args)
{
	t_info		info;
	const char	*save;

	if (!(save = fmt) || fmt == 0)
		return (PRINTF_ERROR);
	init_info(&info);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			update_result(&info, save, (fmt - save));
			if (validate_arg(&save, &fmt, &info, args))
				manage_arg(args, &info);
		}
		else
			++fmt;
	}
	update_result(&info, save, (fmt - save));
	*dst = info.result;
	return ((int)info.cur);
}
