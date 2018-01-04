/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:56:23 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/04 05:13:28 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int						ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	while (n > 0)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
		n--;
	}
	return (0);
}
