/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc/printf/info.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 20:55:35 by modnosum          #+#    #+#             */
/*   Updated: 2018/08/20 22:14:38 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_H
# define INFO_H

# include <wchar.h>
# include <sys/types.h>

typedef union			u_data {
	char				c;
	long long			ll;
	wchar_t				wc;
	unsigned long long	ull;
	size_t				st;
	ssize_t				sst;
	const char			*s;
	const wchar_t		*ws;
	void				*p;
}						t_data;

typedef enum			e_size_f
{
	NO_SIZE,
	CHAR_SIZE,
	SHORT_SIZE,
	LONG_SIZE,
	LONG_LONG_SIZE,
	SIZE_T_SIZE
}						t_size_f;

typedef struct			s_info {
	size_t				width;
	size_t				precision;

	unsigned int		is_alt:1;
	unsigned int		is_zero_padd:1;
	unsigned int		is_left_adj:1;
	unsigned int		is_space:1;
	unsigned int		is_plus:1;

	unsigned int		is_prec:1;
	unsigned int		is_pointer:1;

	t_size_f			size_flag;
	char				specifier;

	t_data				data;
	char				*result;
	size_t				size;
	size_t				cur;

	char				*arg;
	size_t				arg_cur;
	size_t				arg_size;
	int					base;
}						t_info;

void					clear_info(t_info *info);
void					init_info(t_info *info);
void					update_result(t_info *info, const char *str,
						size_t n);

#endif
