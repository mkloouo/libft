/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftrange.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 13:21:11 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/14 13:27:27 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTRANGE_H
# define FTRANGE_H

typedef struct			s_rangei
{
	int					min;
	int					max;
}						t_rangei;

typedef struct			s_rangef
{
	float				min;
	float				max;
}						t_rangef;

t_rangei				get_rangei(int min, int max);
t_rangef				get_rangef(float min, float max);

void					set_rangei(t_rangei ri, int min, int max);
void					set_rangef(t_rangef rf, float min, float max);

int						ft_mapi(int value, t_rangei from, t_rangei to);
float					ft_mapf(float value, t_rangef from, t_rangef to);

#endif
