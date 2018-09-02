/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_rangei.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 13:27:59 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/25 23:28:29 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/range.h>

void					set_rangei(t_rangei ri, int min, int max)
{
	(void)ri;
	ri.min = min;
	ri.max = max;
}
