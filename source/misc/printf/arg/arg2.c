/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 15:46:41 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/21 15:46:53 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/misc/printf/arg.h>

static void		manage_string(va_list *args, t_info *info)
{
	if (info->size_flag == LONG_SIZE)
	{
		info->data.ws = va_arg(*args, const wchar_t*);
		if (info->data.ws == 0)
			info->data.ws = L"(null)";
		form_wide_string(info);
	}
	else
	{
		info->data.s = va_arg(*args, const char*);
		if (info->data.s == 0)
			info->data.s = "(null)";
		form_string(info);
	}
}

static void		manage_char(va_list *args, t_info *info)
{
	if (info->size_flag == LONG_SIZE)
	{
		info->data.wc = va_arg(*args, wchar_t);
		form_wide_char(info);
	}
	else
	{
		info->data.c = va_arg(*args, int);
		form_char(info);
	}
}

void			manage_letters(va_list *args, t_info *info)
{
	if (info->specifier == 's')
		manage_string(args, info);
	else
		manage_char(args, info);
}
