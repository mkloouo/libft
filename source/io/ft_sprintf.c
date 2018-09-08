/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 17:48:36 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 17:08:17 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>

int     	ft_sprintf(char **dst, char const *fmt, ...)
{
	int		ret;
	va_list	args;

	va_start(args, fmt);
	ret = ft_vsprintf(dst, fmt, &args);
	va_end(args);
	return (ret);
}
