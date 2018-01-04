/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:44:57 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/04 05:13:25 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void					*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*ptr;

	ptr = (unsigned char*)s;
	while (n)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
