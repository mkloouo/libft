/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc/printf/arg8.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 18:05:02 by modnosum          #+#    #+#             */
/*   Updated: 2018/08/20 20:30:22 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <misc/printf/arg.h>
#include <ft_printf.h>

void			form_wide_char(t_info *info)
{
	info->arg_cur = my_wchar_size(info->data.wc);
	info->arg_size = info->width;
	if (info->arg_cur > info->arg_size)
		info->arg_size = info->arg_cur;
	info->arg = my_strnew(info->arg_size, (info->is_zero_padd ? '0' : ' '));
	if (info->is_left_adj)
		my_wstrncpy(info->arg,
			&(info->data.wc), info->arg_cur);
	else
		my_wstrncpy((info->arg + info->arg_size - info->arg_cur),
			&(info->data.wc), info->arg_cur);
	info->arg_cur = info->arg_size;
}
