/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_rangef.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 13:26:04 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/02 19:53:07 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/range.h>

t_rangef				get_rangef(float min, float max)
{
	t_rangef			rf;

	rf.min = min;
	rf.max = max;
	return (rf);
}
