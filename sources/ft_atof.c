/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 16:25:44 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/26 16:25:45 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

double					ft_atof(const char *str)
{
	double				num;
	double				part;
	int					sign;

	num = ft_atoi(str);
	while (ft_isspace(*str))
		str++;
	sign = (num >= 0) ? (1) : (-1);
	num = (num >= 0) ? (num) : (-num);
	str = (*str == '-' || *str == '+') ? (str + 1) : (str);
	while (ft_isdigit(*str))
		str++;
	if (*str == '.')
	{
		str++;
		part = 1.0 / 10;
		while (ft_isdigit(*str))
		{
			num += (*str - '0') * part;
			part /= 10;
			str++;
		}
	}
	return ((double)sign * num);
}
