/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:49:50 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/04 19:17:25 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void					ft_bzero(void *s, size_t n)
{
	unsigned char		*ptr;

	ptr = (unsigned char*)s;
	while (n)
	{
		*ptr++ = 0;
		n--;
	}
}
