/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 15:48:52 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/21 15:48:54 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/misc/printf/arg.h>
#include <ft/string.h>

static size_t	ft_numlen(long long num)
{
	size_t		len;

	if (num == 0)
		return (1);
	len = 0;
	while (num)
	{
		num /= 10;
		++len;
	}
	return (len);
}

static void		form_digits(char *str, size_t nlen, size_t pos, long long num)
{
	int			digit;

	while (nlen)
	{
		if (num)
		{
			digit = (num % 10);
			digit = (digit < 0) ? (-digit) : (digit);
			num /= 10;
		}
		else
		{
			digit = 0;
		}
		str[--pos] = (digit + '0');
		--nlen;
	}
}

static void		form_signed_helper(t_info *info, size_t *nlen,
				size_t *spos, int *place_sign)
{
	*nlen = ft_numlen(info->data.ll);
	if (info->data.ll == 0 && info->is_prec && info->precision == 0)
		*nlen = 0;
	info->arg_cur = *nlen;
	if (info->width > info->arg_cur)
		info->arg_cur = info->width;
	if (info->precision > *nlen)
		*nlen = info->precision;
	info->arg_cur = (info->arg_cur > *nlen) ? (info->arg_cur) : (*nlen);
	if (!(*place_sign = 0) && ((info->data.ll >= 0 && (info->is_plus ||
							info->is_space)) || info->data.ll < 0))
	{
		*place_sign = 1;
		++*nlen;
		if (*nlen > info->arg_cur)
			info->arg_cur = *nlen;
		*spos = (info->is_left_adj) ? (0) : (info->arg_cur - *nlen);
	}
	info->arg = ft_strnew(info->arg_cur, ((info->is_zero_padd &&
								!info->is_left_adj &&
								!info->is_prec) ? ('0') : (' ')));
	if (!info->is_prec && info->is_zero_padd)
		*spos = 0;
}

static void		form_signed(t_info *info)
{
	size_t		nlen;
	size_t		spos;
	int			place_sign;

	form_signed_helper(info, &nlen, &spos, &place_sign);
	if (info->is_left_adj)
		form_digits(info->arg, nlen, nlen, info->data.ll);
	else
		form_digits(info->arg, nlen, info->arg_cur, info->data.ll);
	if (place_sign)
	{
		if (info->data.ll < 0)
			info->arg[spos] = '-';
		else
			info->arg[spos] = (info->is_plus) ? '+' : ' ';
	}
}

void			manage_signed(va_list *args, t_info *info)
{
	if (info->size_flag == CHAR_SIZE)
		info->data.ll = (signed char)va_arg(*args, int);
	else if (info->size_flag == SHORT_SIZE)
		info->data.ll = (signed short int)va_arg(*args, int);
	else if (info->size_flag == LONG_SIZE)
		info->data.ll = (signed long)va_arg(*args, long);
	else if (info->size_flag == LONG_LONG_SIZE)
		info->data.ll = va_arg(*args, long long);
	else if (info->size_flag == SIZE_T_SIZE)
		info->data.sst = va_arg(*args, ssize_t);
	else
		info->data.ll = va_arg(*args, int);
	form_signed(info);
}
