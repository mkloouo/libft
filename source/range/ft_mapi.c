/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 13:24:07 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/25 16:36:52 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/range.h>

int						ft_mapi(int value, t_rangei from, t_rangei to)
{
	int					mvalue;
	int					slope;

	if ((from.max - from.min) != 0)
		slope = (to.max - to.min) / (from.max - from.min);
	else
		return (0);
	mvalue = to.min + slope * (value - from.min);
	return (mvalue);
}
