/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 17:21:28 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 20:04:33 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftmath.h>

double					ft_map(double value, t_range *from,
t_range *to)
{
	double				mvalue;
	double				slope;

	if ((from->max - from->min) != 0)
		slope = (to->max - to->min) / (from->max - from->min);
	else
		return (0);
	mvalue = to->min + slope * (value - from->min);
	return (mvalue);
}
