/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_parse_printf1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 20:47:45 by modnosum          #+#    #+#             */
/*   Updated: 2018/08/20 23:16:30 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>
#include <my_string.h>
#include <my_parse_printf.h>

int				my_parse_star(char const **fmt, va_list *args, size_t *assign,
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
		*assign = my_parse_number(fmt);
	return (2);
}

void			my_manage_size_flag(char const **fmt, t_info *info,
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

void			my_parse_size_flags(char const **fmt, t_info *info)
{
	char const	*f;
	char const	*flags;

	flags = "zjhl";
	while ((f = my_strchr(flags, **fmt)))
	{
		if (*f == 'h')
			my_manage_size_flag(fmt, info, SHORT_SIZE,
								((*(*fmt + 1) == 'h') ? (-1) : (0)));
		else if (*f == 'l')
			my_manage_size_flag(fmt, info, LONG_SIZE,
								((*(*fmt + 1) == 'l') ? (1) : (0)));
		else if (*f == 'j')
			my_manage_size_flag(fmt, info, LONG_LONG_SIZE, 0);
		else
			my_manage_size_flag(fmt, info, SIZE_T_SIZE, 0);
		++*fmt;
	}
}

int				my_parse_specifier(char const **fmt, t_info *info)
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

int				my_validate_arg(char const **pos, char const **fmt,
				t_info *info, va_list *args)
{
	int			is_valid;
	char const	*save;

	save = *fmt;
	++*fmt;
	my_parse_flags(fmt, info);
	if (my_parse_star(fmt, args, &info->width, 1) == 1)
		info->is_left_adj = 1;
	if (**fmt == '.' && ++*fmt && (info->is_prec = 1))
		if (my_parse_star(fmt, args, &info->precision, 0) != 2)
			info->is_prec = 0;
	my_parse_size_flags(fmt, info);
	if (!(is_valid = my_parse_specifier(fmt, info)))
		*pos = save;
	else
		*pos = *fmt;
	return (is_valid);
}
