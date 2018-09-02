/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_rangei.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 13:27:59 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/02 19:53:21 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/range.h>

void					set_rangei(t_rangei ri, int min, int max)
{
	(void)ri;
	ri.min = min;
	ri.max = max;
}
