/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftmath.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:30:28 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 20:02:45 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTMATH_H
# define FTMATH_H

/*
** Math related functions
*/

typedef struct			s_range
{
	double				min;
	double				max;
}						t_range;

int						ft_abs(int number);
float					ft_fabs(float number);
float					ft_round(float number);

void					ft_swap(int *a, int *b);

double					ft_map(double value, t_range *from,
t_range *to);

#endif
