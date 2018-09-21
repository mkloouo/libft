/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 15:46:28 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/21 15:46:36 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/misc/printf/arg.h>
#include <ft/memory.h>

void			manage_arg(va_list *args, t_info *info)
{
	if (info->specifier == 's' || info->specifier == 'c')
		manage_letters(args, info);
	else if (info->specifier == 'u' || info->specifier == 'o' ||
				info->specifier == 'x' || info->specifier == 'X')
		manage_unsigned(args, info);
	else if (info->specifier == 'd')
		manage_signed(args, info);
	else if (info->specifier == 'p')
		manage_pointer(args, info);
	else
		manage_custom(args, info);
	if (info->arg_cur > 0)
		update_result(info, info->arg, info->arg_cur);
	if (info->arg)
		free((void*)info->arg);
	clear_info(info);
}
