/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 17:21:28 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 17:28:24 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

double					ft_map(double value, double min, double max,
double mmin, double mmax)
{
	double				mvalue;
	double				slope;

	if ((max - min) != 0)
		slope = (mmax - mmin) / (max - min);
	else
		return (0);
	mvalue = mmin + slope * (value  - min);
	return (mvalue);
}
