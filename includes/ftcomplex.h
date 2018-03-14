/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftcomplex.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 14:18:32 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/14 14:18:32 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTCOMPLEX_H
# define FTCOMPLEX_H

typedef struct			s_complex
{
	float				r;
	float				i;
}						t_complex;

t_complex				get_complex(float r, float i);
void					set_complex(t_complex c, float r, float i);

t_complex				add_complex(t_complex a, t_complex b);
t_complex				sub_complex(t_complex a, t_complex b);
t_complex				mult_complex(t_complex a, t_complex b);
t_complex				div_complex(t_complex a, t_complex b);

t_complex				pow_complex(t_complex c, float power);
float					mod_complex(t_complex c);
float					arg_complex(t_complex c);

#endif
