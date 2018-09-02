/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_rangef.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 16:49:56 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/24 16:52:46 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/memory.h>
#include <ft/range.h>

t_rangef				*alloc_rangef(float min, float max)
{
	t_rangef			*rf;

	if ((rf = (t_rangef*)ft_memalloc(sizeof(t_rangef))))
	{
		rf->min = min;
		rf->max = max;
	}
	return (rf);
}
