/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 20:16:19 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 15:26:51 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONV_H
# define CONV_H

char					*ft_itoa(int n);
char					*ft_itoa_base(int value, int base);
int						ft_atoi(const char *str);
double					ft_atof(const char *str);

int						ft_strtoi(char const *str, char *err);
long					ft_strtoli(char const *str);

#endif
