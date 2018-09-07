/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 20:49:49 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 16:30:24 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>
#include <ft/misc/printf/parse.h>

size_t		parse_number(char const **fmt)
{
	size_t	number;

	number = 0;
	while (**fmt >= '0' && **fmt <= '9')
	{
		number = number * 10 + (**fmt - '0');
		++*fmt;
	}
	return (number);
}

void		parse_flags(char const **fmt, t_info *info)
{
	while (**fmt == '#' || **fmt == '0' || **fmt == '-' ||
			**fmt == ' ' || **fmt == '+')
	{
		if (**fmt == '#')
			info->is_alt = 1;
		else if (**fmt == '0')
			info->is_zero_padd = 1;
		else if (**fmt == '-')
			info->is_left_adj = 1;
		else if (**fmt == ' ')
			info->is_space = 1;
		else
			info->is_plus = 1;
		++*fmt;
	}
}
