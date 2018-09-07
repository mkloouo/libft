/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc/printf/arg7.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 18:05:02 by modnosum          #+#    #+#             */
/*   Updated: 2018/08/20 20:30:25 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/misc/printf/arg.h>
#include <ft/memory.h>
#include <ft/string.h>

void			form_string(t_info *info)
{
	size_t		i;
	size_t		len;
	wchar_t		*str;

	len = ft_strlen(info->data.s);
	str = malloc(sizeof(wchar_t) * (len + 1));
	i = 0;
	while (i < len)
	{
		str[i] = (wchar_t)info->data.s[i];
		++i;
	}
	str[i] = 0;
	info->data.ws = str;
	form_wide_string(info);
	free(str);
}
