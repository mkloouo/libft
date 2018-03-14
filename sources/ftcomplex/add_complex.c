/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_complex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 13:38:28 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/14 13:39:14 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftcomplex.h>

t_complex				add_complex(t_complex a, t_complex b)
{
	t_complex			c;

	c.r = a.r + b.r;
	c.i = a.i + b.i;
	return (c);
}
