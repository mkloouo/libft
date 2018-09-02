/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc/printf/arg9.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 18:05:02 by modnosum          #+#    #+#             */
/*   Updated: 2018/08/20 20:54:32 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <misc/printf/arg.h>
#include <ft_printf.h>

void			form_char(t_info *info)
{
	info->data.wc = (wchar_t)((signed char)info->data.c);
	form_wide_char(info);
}
