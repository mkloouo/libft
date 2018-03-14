/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rangef.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 13:26:04 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/14 13:26:29 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftrange.h>

t_rangef				get_rangef(float min, float max)
{
	t_rangef			rf;

	rf.min = min;
	rf.max = max;
	return (rf);
}
