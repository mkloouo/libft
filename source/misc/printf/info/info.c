/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 15:49:19 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/21 15:49:20 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/misc/printf/info.h>
#include <ft/string.h>
#include <ft/io.h>
#include <ft/memory.h>

static void		clear_info_helper(t_info *info)
{
	info->is_pointer = 0;
	info->arg_cur = 0;
	info->base = 10;
}

void			clear_info(t_info *info)
{
	if (!info->result)
	{
		info->cur = 0;
		info->size = FT_PRINTF_SIZE;
		info->result = ft_strnew(info->size, 0);
	}
	info->width = 0;
	info->precision = 0;
	info->is_alt = 0;
	info->is_left_adj = 0;
	info->is_plus = 0;
	info->is_space = 0;
	info->is_zero_padd = 0;
	info->is_prec = 0;
	info->size_flag = NO_SIZE;
	info->specifier = 0;
	info->data.p = 0;
	info->arg = 0;
	info->arg_size = 0;
	clear_info_helper(info);
}

void			init_info(t_info *info)
{
	info->result = 0;
	clear_info(info);
}

void			update_result(t_info *info, const char *str, size_t n)
{
	if (n > (info->size - info->cur))
	{
		info->result = ft_resize_str(info->result, info->size,
									(info->size * 2) + n);
		info->size = (info->size * 2) + n;
	}
	ft_strncpy((info->result + info->cur), str, n);
	info->cur += n;
}
