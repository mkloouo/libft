/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 05:06:38 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/04 20:01:34 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

/*
** Standart library.
*/

/*
** string.h is for size_t import.
*/
# include <string.h>

void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);

char					*ft_itoa(int n);
char					*ft_itoa_base(int value, int base);
int						ft_atoi(const char *str);

#endif
