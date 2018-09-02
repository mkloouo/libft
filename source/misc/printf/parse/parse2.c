/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_parse_printf2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 20:49:49 by modnosum          #+#    #+#             */
/*   Updated: 2018/08/20 22:56:41 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>
#include <my_parse_printf.h>

size_t		my_parse_number(char const **fmt)
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

void		my_parse_flags(char const **fmt, t_info *info)
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
