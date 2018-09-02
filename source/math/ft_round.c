/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 00:36:59 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:47:03 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/math.h>

float					ft_round(float number)
{
	int					part;

	part = (int)number;
	if (ft_fabs((float)(number - part)) >= 0.5f)
		return ((float)(part + (number > 0 ? 1 : -1)));
	else
		return ((float)part);
}
