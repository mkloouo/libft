/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:00:35 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:49:10 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftstdlib.h>

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	ptr1 = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	while (n)
	{
		*ptr1++ = *ptr2++;
		if (*(ptr2 - 1) == (unsigned char)c)
			return (ptr1);
		n--;
	}
	return (NULL);
}
