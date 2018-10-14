/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 17:48:36 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/14 23:06:08 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>

#include <ft/string.h>
#include <ft/memory.h>

int			ft_sprintf(char *dst, char const *fmt, ...)
{
	char 	*str;
	int		ret;
	va_list	args;

	va_start(args, fmt);
	ret = ft_vsprintf(&str, fmt, &args);
	if (ret > 0)
		ft_strncpy(dst, str, (size_t) ret);
	free(str);
	va_end(args);
	return (ret);
}
