/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 20:37:04 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 16:10:33 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

# include <stdarg.h>
# include <ft/misc/printf/info.h>

int		parse_star(char const **fmt, va_list *args, size_t *assign,
		int think_of_minus_as_minus_not_error);
void	manage_size_flag(char const **fmt, t_info *info,
		t_size_f new_size, int move);
void	parse_size_flags(char const **fmt, t_info *info);
int		parse_specifier(char const **fmt, t_info *info);
int		validate_arg(char const **pos, char const **fmt,
		t_info *info, va_list *args);
size_t	parse_number(char const **fmt);
void	parse_flags(char const **fmt, t_info *info);

#endif
