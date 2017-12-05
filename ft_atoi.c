/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:00:57 by modnosum          #+#    #+#             */
/*   Updated: 2017/12/01 00:01:27 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define LONG_LONG_VAL 9223372036854775807

int				ft_atoi(const char *str)
{
	unsigned long long	num;
	char				sign;

	while (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	num = 0;
	while (ft_isdigit(*str))
	{
		if (num > LONG_LONG_VAL)
			return ((sign == -1) ? 0 : -1);
		num = num * 10 + (*str++ - '0');
	}
	return (sign * num);
}
