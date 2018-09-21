/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg9.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 15:48:00 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/21 15:48:01 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/misc/printf/arg.h>
#include <ft/io.h>

void			form_char(t_info *info)
{
	info->data.wc = (wchar_t)((signed char)info->data.c);
	form_wide_char(info);
}
