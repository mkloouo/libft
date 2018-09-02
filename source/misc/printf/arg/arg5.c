/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc/printf/arg5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 19:34:47 by modnosum          #+#    #+#             */
/*   Updated: 2018/08/20 22:11:26 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <misc/printf/arg.h>

void			manage_custom(va_list *args, t_info *info)
{
	(void)args;
	if (info->specifier == '%')
	{
		info->arg_cur = (info->width) ? (info->width) : (1);
		info->arg = my_strnew(info->arg_cur, ' ');
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
