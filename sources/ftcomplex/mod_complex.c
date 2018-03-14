/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mod_complex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 14:12:47 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/14 14:14:05 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftcomplex.h>
#include <math.h>

float					mod_complex(t_complex c)
{
	return (sqrt(c.r * c.r + c.i * c.i));
}
