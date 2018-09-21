/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg5.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 15:46:58 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/21 15:46:59 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/misc/printf/arg.h>
#include <ft/string.h>

void			manage_custom(va_list *args, t_info *info)
{
	(void)args;
	if (info->specifier == '%')
	{
		info->arg_cur = (info->width) ? (info->width) : (1);
		info->arg = ft_strnew(info->arg_cur, ' ');
		info->arg[((info->is_left_adj) ? (0) : (info->arg_cur - 1))] = '%';
	}
}

void			manage_pointer(va_list *args, t_info *info)
{
	info->data.p = va_arg(*args, void*);
	info->is_pointer = 1;
	info->is_alt = 1;
	info->specifier = 'x';
	info->size_flag = LONG_LONG_SIZE;
	form_unsigned(info, "0123456789abcdef");
}
