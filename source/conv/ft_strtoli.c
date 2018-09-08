/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoli.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:16:06 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 15:26:17 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/conv.h>

#include <ft/char.h>

long		ft_strtoli(char const* str)
{
	long	result;
	int		sign;

	sign = 1;
	result = 0;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	while (ft_isdigit(*str))
		result = result * 10 + (*str++ - '0');
	return (result * sign);
}
