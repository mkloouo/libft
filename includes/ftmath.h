/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftmath.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:30:28 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:30:53 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTMATH_H
# define FTMATH_H

/*
** Math related functions
*/

int						ft_abs(int number);
float					ft_fabs(float number);
float					ft_round(float number);

void					ft_swap(int *a, int *b);

double					ft_map(double value, double min, double max,
double mmin, double mmax);

#endif
