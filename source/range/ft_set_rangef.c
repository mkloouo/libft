/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_rangef.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 13:27:34 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/02 19:53:15 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/range.h>

void					set_rangef(t_rangef rf, float min, float max)
{
	(void)rf;
	rf.min = min;
	rf.max = max;
}
