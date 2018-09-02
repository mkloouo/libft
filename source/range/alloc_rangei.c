/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_rangei.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 16:50:19 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/24 16:52:20 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/memory.h>
#include <ft/range.h>

t_rangei				*alloc_rangei(int min, int max)
{
	t_rangei			*ri;

	if ((ri = (t_rangei*)ft_memalloc(sizeof(t_rangei))))
	{
		ri->min = min;
		ri->max = max;
	}
	return (ri);
}
