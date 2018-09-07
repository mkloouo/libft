/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 16:25:44 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 17:42:36 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/conv.h>

#include <ft/char.h>

double		ft_atof(const char *str)
{
	double	num;
	int		sign;
	int		coeff;

	num = 0.0f;
	sign = 1;
	while (ft_isspace(*str))
		++str;
	if ((*str == '-' && (sign = -1)) || *str == '+')
		++str;
	while (ft_isdigit(*str))
		num = num * 10 + (*str++ - '0');
	if (*str == '.')
	{
		coeff = 1;
		while (ft_isdigit(*str))
			num = num + ((double)(*str++ - '0') / (coeff *= 10));
	}
	return (num * sign);
}
