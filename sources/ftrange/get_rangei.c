/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rangei.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 13:25:13 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/14 13:25:55 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftrange.h>

t_rangei				get_rangei(int min, int max)
{
	t_rangei			ri;

	ri.min = min;
	ri.max = max;
	return (ri);
}
