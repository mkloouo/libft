/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc_rangei.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 16:50:19 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/02 19:53:04 by modnosum         ###   ########.fr       */
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
