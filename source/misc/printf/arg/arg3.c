/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 15:49:07 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/14 17:22:43 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/misc/printf/arg.h>
#include <ft/string.h>

static size_t	ft_numlen(unsigned long long num, int base)
{
	size_t		len;

	if (num == 0)
		return (1);
	len = 0;
	while (num)
	{
		num /= base;
		++len;
	}
	return (len);
}

static void		form_digits(t_info *info, size_t nlen, size_t pos,
				char const *base_chars)
{
	unsigned long long	ull;
	char				*str;

	ull = info->data.ull;
	str = info->arg;
	while (nlen)
	{
		if (ull)
		{
			str[--pos] = base_chars[(ull % info->base)];
			ull /= info->base;
		}
		else
			str[--pos] = '0';
		--nlen;
	}
}

static void		form_unsigned_helper(t_info *info, size_t *nlen,
				size_t *place_sign, char const *base_chars)
{
	info->base = ft_strlen(base_chars);
	*nlen = ft_numlen(info->data.ull, info->base);
	if (info->data.ull == 0 && (!info->is_alt || (info->base == 16 &&
		info->is_alt)) && (info->is_prec && info->precision == 0))
		*nlen = 0;
	info->arg_cur = (info->width > *nlen) ? (info->width) : (*nlen);
	if (info->base == 8 && info->data.ull < 8 &&
		info->is_prec && info->precision)
		info->precision -= 1;
	if (info->precision > *nlen)
		*nlen = info->precision;
	if (*nlen > info->arg_cur)
		info->arg_cur = *nlen;
	if (!(*place_sign = 0) && info->is_alt && (info->data.ull > 0
		|| info->is_pointer) && (info->base == 8 || info->base == 16))
	{
		*place_sign = (info->base == 16) ? (2) : (1);
		if (((*nlen += *place_sign)) && *nlen > info->arg_cur)
			info->arg_cur = *nlen;
		info->arg_size = (info->is_left_adj) ? (0) : (info->arg_cur - *nlen);
	}
	info->arg = ft_strnew(info->arg_cur, ((info->is_zero_padd &&
		!info->is_left_adj && !info->is_prec) ? ('0') : (' ')));
	if (!info->is_prec && info->is_zero_padd)
		info->arg_size = 0;
}

void			form_unsigned(t_info *info, char const *base_chars)
{
	size_t		nlen;
	size_t		place_sign;

	form_unsigned_helper(info, &nlen, &place_sign, base_chars);
	if (info->is_left_adj)
		form_digits(info, nlen, nlen, base_chars);
	else
		form_digits(info, nlen, info->arg_cur, base_chars);
	if (place_sign)
	{
		info->arg[info->arg_size] = '0';
		if (place_sign > 1)
			info->arg[info->arg_size + 1] = info->specifier;
	}
}

void			manage_unsigned(va_list *args, t_info *info)
{
	char const	*base_chars;

	if (info->size_flag == CHAR_SIZE)
		info->data.ull = (unsigned char)va_arg(*args, unsigned int);
	else if (info->size_flag == SHORT_SIZE)
		info->data.ull = (unsigned short int)va_arg(*args, unsigned int);
	else if (info->size_flag == LONG_SIZE)
		info->data.ull = (unsigned long)va_arg(*args, unsigned long);
	else if (info->size_flag == LONG_LONG_SIZE)
		info->data.ull = va_arg(*args, unsigned long long);
	else if (info->size_flag == SIZE_T_SIZE)
		info->data.st = va_arg(*args, size_t);
	else
		info->data.ull = va_arg(*args, unsigned int);
	if (info->specifier == 'u')
		base_chars = "0123456789";
	else if (info->specifier == 'o')
		base_chars = "01234567";
	else if (info->specifier == 'x' || info->specifier == 'X')
		base_chars = ((info->specifier == 'x') ? ("0123456789abcdef")
											: ("0123456789ABCDEF"));
	else
		base_chars = "01";
	form_unsigned(info, base_chars);
}
