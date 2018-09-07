/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 20:47:45 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 16:31:08 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>
#include <ft/string.h>
#include <ft/misc/printf/parse.h>

int				parse_star(char const **fmt, va_list *args, size_t *assign,
				int think_of_minus_as_minus_not_error)
{
	int			hmm;
	ssize_t		num;

	if (**fmt == '*')
	{
		num = (ssize_t)va_arg(*args, int);
		if ((hmm = (num < 0 && think_of_minus_as_minus_not_error)))
			num = -num;
		else if (num < 0)
			num = 0;
		*assign = num;
		++*fmt;
		return (hmm);
	}
	else
		*assign = parse_number(fmt);
	return (2);
}

void			manage_size_flag(char const **fmt, t_info *info,
				t_size_f new_size, int move)
{
	if (move)
	{
		++*fmt;
		new_size += move;
	}
	if (new_size > info->size_flag)
		info->size_flag = new_size;
}

void			parse_size_flags(char const **fmt, t_info *info)
{
	char const	*f;
	char const	*flags;

	flags = "zjhl";
	while ((f = ft_strchr(flags, **fmt)))
	{
		if (*f == 'h')
			manage_size_flag(fmt, info, SHORT_SIZE,
								((*(*fmt + 1) == 'h') ? (-1) : (0)));
		else if (*f == 'l')
			manage_size_flag(fmt, info, LONG_SIZE,
								((*(*fmt + 1) == 'l') ? (1) : (0)));
		else if (*f == 'j')
			manage_size_flag(fmt, info, LONG_LONG_SIZE, 0);
		else
			manage_size_flag(fmt, info, SIZE_T_SIZE, 0);
		++*fmt;
	}
}

int				parse_specifier(char const **fmt, t_info *info)
{
	char		test;

	test = (**fmt >= 'A' && **fmt <= 'Z') ? (**fmt + ('a' - 'A'))
										: (**fmt);
	if (!(test == 's' || test == 'c' || test == 'u' || test == 'o' ||
		test == 'x' || test == 'i' || test == 'd' || test == 'p' ||
		test == '%'))
		return (0);
	if (**fmt == 'S' || **fmt == 'C' || **fmt == 'U' || **fmt == 'O' ||
		**fmt == 'D')
		info->size_flag = LONG_SIZE;
	else if (**fmt == 'X')
		test = 'X';
	if (test == 'i')
		test = 'd';
	info->specifier = test;
	++*fmt;
	return (1);
}

int				validate_arg(char const **pos, char const **fmt,
				t_info *info, va_list *args)
{
	int			is_valid;
	char const	*save;

	save = *fmt;
	++*fmt;
	parse_flags(fmt, info);
	if (parse_star(fmt, args, &info->width, 1) == 1)
		info->is_left_adj = 1;
	if (**fmt == '.' && ++*fmt && (info->is_prec = 1))
		if (parse_star(fmt, args, &info->precision, 0) != 2)
			info->is_prec = 0;
	parse_size_flags(fmt, info);
	if (!(is_valid = parse_specifier(fmt, info)))
		*pos = save;
	else
		*pos = *fmt;
	return (is_valid);
}
