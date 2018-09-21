/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg8.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 15:47:54 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/21 15:48:48 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/misc/printf/arg.h>

#include <ft/char.h>
#include <ft/string.h>

void			form_wide_char(t_info *info)
{
	info->arg_cur = ft_wcsize(info->data.wc);
	info->arg_size = info->width;
	if (info->arg_cur > info->arg_size)
		info->arg_size = info->arg_cur;
	info->arg = ft_strnew(info->arg_size, (info->is_zero_padd ? '0' : ' '));
	if (info->is_left_adj)
		ft_wstrncpy(info->arg,
			&(info->data.wc), info->arg_cur);
	else
		ft_wstrncpy((info->arg + info->arg_size - info->arg_cur),
			&(info->data.wc), info->arg_cur);
	info->arg_cur = info->arg_size;
}
