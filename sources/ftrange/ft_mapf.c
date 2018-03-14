/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 13:23:12 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/14 13:29:53 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftrange.h>

float					ft_mapf(float value, t_rangef from, t_rangef to)
{
	float				mvalue;
	float				slope;

	if ((from.max - from.min) != 0)
		slope = (to.max - to.min) / (from.max - from.min);
	else
		return (0);
	mvalue = to.min + slope * (value - from.min);
	return (mvalue);
}
