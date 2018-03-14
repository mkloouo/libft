/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mult_complex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 13:42:02 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/14 14:19:03 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftcomplex.h>

t_complex				mult_complex(t_complex a, t_complex b)
{
	t_complex			c;

	c.r = (a.r * b.r) - (a.i * b.i);
	c.i = (a.i * b.r) + (a.r * b.i);
	return (c);
}
