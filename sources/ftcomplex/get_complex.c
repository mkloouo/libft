/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_complex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 13:36:21 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/14 14:18:54 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftcomplex.h>

t_complex				get_complex(float r, float i)
{
	t_complex			c;

	c.r = r;
	c.i = i;
	return (c);
}
