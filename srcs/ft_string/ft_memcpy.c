/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:53:59 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/04 05:33:32 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void					*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	ptr1 = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	while (n--)
		*ptr1++ = *ptr2++;
	return (dst);
}
