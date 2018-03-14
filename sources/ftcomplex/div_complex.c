/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div_complex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 13:47:31 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/14 14:18:44 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftcomplex.h>
#include <math.h>

t_complex				div_complex(t_complex a, t_complex b)
{
	t_complex			c;
	float				bpow2sum;

	c.r = 0;
	c.i = 0;
	if (b.r != 0 || b.i != 0)
	{
		bpow2sum = pow(b.r, 2) + pow(b.i, 2);
		c.r = (a.r * b.r + a.i * b.i) / (bpow2sum);
		c.i = (a.i * b.r - a.r * b.i) / (bpow2sum);
	}
	return (c);
}
