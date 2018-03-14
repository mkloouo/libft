/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pow_complex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 14:05:27 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/14 14:19:32 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftcomplex.h>
#include <math.h>

t_complex				pow_complex(t_complex c, float power)
{
	t_complex			p;
	float				mod;
	float				arg;

	mod = mod_complex(c);
	arg = arg_complex(c);
	mod = pow(mod, power);
	arg *= power;
	p.r = mod * cos(arg);
	p.i = mod * sin(arg);
	return (p);
}
